#include <iostream>
#include <vector>
#include "Operator.h"
#include <string>

/*
*
* Program wyci�gaj�cy informacje z numeru PESEL
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
*/

//*Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task1()
{
	std::string password = "abc123", passwordFromUser;
	do
	{
		std::cout << "podaj haslo \n";
		std::cin >> passwordFromUser;
	} while (password != passwordFromUser);
}

//*Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.

void task2()
{
	int vovelCount = 0, consonantCount = 0;
	std::string textFromUser;
	std::cout << "podaj text";
	std::cin >> textFromUser;

	for (char c : textFromUser)
	{
		if (isalpha(c))
		{
			if (c == 'a' || c == 'A' || c == 'e' || c == 'E'
				|| c == 'i' || c == 'I' || c == 'u'
				|| c == 'U' || c == 'y' || c == 'Y')
				vovelCount++;
			else
				consonantCount++;
		}
	}
	std::cout << "samogloski: " << vovelCount << "\nspolgloski: " << consonantCount;
}

//*Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.
// Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
void task3()
{
	int number;
	std::string binaryNumber = "";
	std::cout << "podaj liczbe: \n";
	std::cin >> number;
	do
	{
		binaryNumber = std::to_string(number % 2) + binaryNumber;
		number /= 2;
	} while (number != 0);
	std::cout << binaryNumber;
}

//*Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem
// (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task4()
{
	std::string textFromUser, textPalindrome = "";
	std::cout << "podaj text: ";
	std::cin >> textFromUser;
	for (int i = textFromUser.length() - 1; i >= 0; i--)
	{
		textPalindrome += textFromUser[i];
	}
	if (textFromUser == textPalindrome)
		std::cout << textFromUser << " to jest palindrom";
	else
		std::cout << textFromUser << " to NIE jest palindrom";
}

//*Program sprawdzaj�cy czy podane dwa s�owa s� anagramami
//(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
void task5()
{
	int text1CharSum = 0, text2CharSum = 0;
	std::string textFromUser1, textFromUser2;
	std::cout << "podaj text 1: ";
	std::cin >> textFromUser1;
	std::cout << "podaj text 2: ";
	std::cin >> textFromUser2;

	for (char c : textFromUser1)
		text1CharSum += c;
	for (char c : textFromUser2)
		text2CharSum += c;
	if (text1CharSum == text2CharSum)
		std::cout << "to sa anagramy";
	else
		std::cout << "to NIE sa anagramy";

}


//*Program implementuj�cy algorytm szyfrowania Cezara
// (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
void task7()
{
	std::string textFromUser;
	int letterIncrise;

	std::cout << "podaj text\n";
	std::cin >> textFromUser;
	std::cout << "podaj o ile ma si� zwi�krza� text \n";
	std::cin >> letterIncrise;

	if (letterIncrise > 'z')
		letterIncrise %= 26;

	for (char c : textFromUser)
	{
		if (isalpha(c))
		{
			for (int i = 0; i < letterIncrise; i++)
			{
				c++;
				if (c == '[')
					c = 'A';
				else if (c == '{')
					c = 'a';
			}
		}
		std::cout << c;
	}
}

bool isConstOrVariable(char c)
{
	if (c > 'a' && c < 'z' || c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*' || c == '%' || c == '^' || c == '(' || c == ')')
		return 1;
	else
		return 0;
}

//*Program kt�ry na wej�ciu przyjmie r�wnanie a na 
// wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP.Np.na wej�ciu 2 + 3 * 4 na wyj�cu da 234 * +
void task8()
{
	std::string equationRegular;
	std::vector<char> equationONP;
	std::vector<Operator> stack;
	std::cout << "Podaj rownanie: \n";
	std::cin >> equationRegular;

	for (int i = 0; i < equationRegular.length(); i++)
	{
		if (isConstOrVariable(equationRegular[i]))
			equationONP.push_back(equationRegular[i]);
		else if (isOperator(equationRegular[i]))
		{
			Operator op;
			op.AutoSet(equationRegular[i]);
			while (!stack.empty() && op.GetPriority() <= stack.back().GetPriority())
			{
				equationONP.push_back(stack.back().GetSymbol());
				stack.pop_back();
			}

			// DODAJ NAWIASY BO NAWIASY POTRZEBNE
			stack.push_back(op);
		}
		else
			std::cerr << "bruh";
	}
	if (!stack.empty())
	{
		for (int i = 0; i < stack.size(); i++)
		{
			equationONP.push_back(stack.at(i).GetSymbol());
		}
	}

	for (char c : equationONP)
	{
		std::cout << c;
	}

}

int main()
{

	task8();

}