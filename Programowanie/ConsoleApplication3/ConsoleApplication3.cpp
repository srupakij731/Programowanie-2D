﻿#include <string>
#include <iostream>


// Program wyświetlający na ekranie kolejne liczby naturalne od 1 do 10
void task1()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100
void task2()
{
	int amount = 0;
	for (int i = 1; i <= 100; i++)
	{
		amount += i;
	}
	std::cout << amount;
}

//*Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << pow(i, 2) << "\n";
	}
}

//*Program obliczający n!.
void task4()
{
	int numberFromUser, factorial = 1;
	std::cout << "podaj liczbe do silni \n";
	std::cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		factorial *= i;
	}
	std::cout << factorial;
}

//*Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task5()
{
	for (int i = 1; i <= 10; i++)
	{
		int factorial = 1;

		for (int j = 1; j <= i; j++)
		{
			factorial *= j;
		}
		std::cout << "silnia " << i << " wynosi " << factorial << "\n";
	}
}

//*Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	for (int i = 1; i <= 10; i++)
	{
		std::cout << "\n--------- " << i << " ----------\n";
		for (int j = 1; j <= 10; j++)
		{
			std::cout << i * j << "\n";
		}

	}
}

//*Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	for (double i = 0; i <= 100; i++)
	{
		std::cout << i / 3.0 << "\n";
	}
}

//*Program obliczający sumę kwadratów liczb od 1 do 10
void task8()
{
	int amount = 0;
	for (int i = 0; i <= 10; i++)
	{
		amount += pow(i, 2);
	}
	std::cout << amount;

}

//*Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu(ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task9()
{
	int num1 = 0, num2 = 1;
	for (int i = 0; i <= 20; i++)
	{
		std::cout << num1 << "\n";
		num2 += num1;
		num1 = num2 - num1;
	}
}

/*
Program, kóry wyświetli poniższe cztery zwory:

****	54321        121212        122333
***		65432        212121        223334444
**		76543        121212        333444455555
*		87654        212121        444455555666666

*/
void task10()
{
	for (int i = 4; i != 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";


	for (int i = 5; i <= 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << (i - j);
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << (j + i) % 2 + 1;
		}
		std::cout << "\n";
	}

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < i + j; k++)
			{
				std::cout << i + j;
			}
		}
		std::cout << "\n";

	}
}

/*
Oblicz sumę szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Jeżeli się nie pomylisz, to dla odpowiednio
dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π(suma szeregu jest równa π2 / 6).
Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.
*/
void task11()
{
	double numberFromUser, amount = 0;
	std::cout << "podaj liczbe \n";
	std::cin >> numberFromUser;
	for (int i =1; i < numberFromUser; i++)
	{
		amount += 1 / pow(i, 2);
	}
	std::cout << sqrt(amount * 6);
}

//Napisz program, który policzy sumę cyfr podanej przez użytkownika liczby.
void task12()
{
	int amount = 0;
	std::string numberFromUser;
	std::cout << "podaj lcizbe \n";
	std::cin >> numberFromUser;

	for (int i = 0; i < numberFromUser.length(); i++)
	{
		;
		amount += numberFromUser[i] - '0';

	}
	std::cout << amount;

}

/*Miasto T.ma obecnie 100 tys.mieszkańców, ale jego populacja rośnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkańców i ta liczba rośnie w tempie 2 % na rok.
Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, gdy liczba mieszkańców miasta T.przekroczy liczbę z miasta B. */
void task13()
{
	int firstCityPopulation = 100000, secondCityPopulation = 300000;

	for (int i = 0; firstCityPopulation < secondCityPopulation; i++)
	{
		std::cout << "------------------" << i << "------------------";
		std::cout << std::endl;
		std::cout << "populacja 1 miasta wynosi: " << firstCityPopulation << std::endl;
		std::cout << "populacja 2 miasta wynosi: " << secondCityPopulation << std::endl;
		std::cout << std::endl;
		firstCityPopulation *= 1.03;
		secondCityPopulation *= 1.02;
	}
	std::cout << "\n \n KONIEC \n";

	std::cout << "populacja 1 miasta wynosi: " << firstCityPopulation << std::endl;
	std::cout << "populacja 2 miasta wynosi: " << secondCityPopulation << std::endl;
}

//*Program sprawdzający czy podana liczba jest liczbą doskonałą(czyli taką, której suma dzielników(z wyłączeniem samej siebie)
//  jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task14()
{
	int numberFromUser, amount = 1;
	std::cout << "podaj liczbe";
	std::cin >> numberFromUser;

	for (int firstDivisor = 2; firstDivisor <= sqrt(numberFromUser); firstDivisor++)
	{
		int secondDivisor = numberFromUser / firstDivisor;
		if (secondDivisor * firstDivisor == numberFromUser)
			amount += firstDivisor + secondDivisor;
	}
	if (numberFromUser == amount)
		std::cout << "liczba jest doskonała";
	else
		std::cout << "liczba NIE jest doskonała";
}

//*Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
void task15()
{
	int amount = 0;
	for (int i = 2; i <= 10; i++)
	{
		amount = 0;

		for (int j = 1; amount < 1000; j++)
		{
			amount += pow(i, j);
		}
		std::cout << "liczba " << i << " przekroczyła 1000 i wynosi " << amount << "\n";

	}
}

//*Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej.Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
void task16()
{
	std::string numberFromUser;
	std::cout << "podaj liczbe \n";
	std::cin >> numberFromUser;
	std::cout << "liczba cyfr wynosi: " << numberFromUser.length();
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	task11();


}