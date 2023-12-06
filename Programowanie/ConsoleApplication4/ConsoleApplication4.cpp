#include <iostream>
#include <vector>
#include "Operator.h"
#include <string>
#include <sstream>
#include <stack>


/*
*
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

	for (char partOfEquationRegular : textFromUser)
	{
		if (isalpha(partOfEquationRegular))
		{
			if (partOfEquationRegular == 'a' || partOfEquationRegular == 'A' || partOfEquationRegular == 'e' || partOfEquationRegular == 'E'
				|| partOfEquationRegular == 'i' || partOfEquationRegular == 'I' || partOfEquationRegular == 'u'
				|| partOfEquationRegular == 'U' || partOfEquationRegular == 'y' || partOfEquationRegular == 'Y')
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


//*Program wyci�gaj�cy informacje z numeru PESEL
void task6()
{
	std::string pesel;
	std::cout << "podaj pesel \n";
	std::cin >> pesel;


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

	for (char partOfEquationRegular : textFromUser)
	{
		if (isalpha(partOfEquationRegular))
		{
			for (int i = 0; i < letterIncrise; i++)
			{
				partOfEquationRegular++;
				if (partOfEquationRegular == '[')
					partOfEquationRegular = 'A';
				else if (partOfEquationRegular == '{')
					partOfEquationRegular = 'a';
			}
		}
		std::cout << partOfEquationRegular;
	}
}

bool isOperator(std::string partOfEquationRegular)
{
	if (partOfEquationRegular == "+" || partOfEquationRegular == "-" || partOfEquationRegular == "/" || partOfEquationRegular == "*" || partOfEquationRegular == "%" || partOfEquationRegular == "^")
		return 1;
	else
		return 0;
}

//*Program kt�ry na wej�ciu przyjmie r�wnanie a na 
// wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP.Np.na wej�ciu 2 + 3 * 4 na wyj�cu da 234 * +
void task8()
{
	std::string equationRegular;
	std::stack<std::string> reversedEquationONP;
	std::stack<Operator> stack;
	std::cout << "Podaj rownanie: \n";
	std::getline(std::cin, equationRegular);

	std::istringstream iss(equationRegular);

	std::string partOfEquationRegular;

	while (iss >> partOfEquationRegular)
	{
		if (isOperator(partOfEquationRegular))
		{
			Operator op;
			op.AutoSet(partOfEquationRegular);
			while (!stack.empty() && op.GetPriority() <= stack.top().GetPriority())
			{
				reversedEquationONP.push(stack.top().GetSymbol());
				stack.pop();
				// DODAJ NAWIASY BO NAWIASY POTRZEBNE
			}
			stack.push(op);
		}
		else
			reversedEquationONP.push(partOfEquationRegular);
	}
	while (!stack.empty())
	{
		reversedEquationONP.push(stack.top().GetSymbol());
		stack.pop();
	}

	std::stack<std::string>regularEquationONP;


	//XDDDDDDDDDDDDDDDDD
	while (!reversedEquationONP.empty())
	{
		regularEquationONP.push(reversedEquationONP.top());
		reversedEquationONP.pop();
	}


	while (!regularEquationONP.empty())
	{
		std::cout << regularEquationONP.top() << " ";
		regularEquationONP.pop();
	}
}

int main()
{

	task8();

}