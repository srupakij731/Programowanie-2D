#define _USE_MATH_DEFINES
#include <iostream>

//1.Program obliczaj�cy sredni� artmetyczn�

void task1()
{
	double firstNumberFromUser, secondNumberFromUser;
	std::cout << "Podaj 1 liczbe\n";
	std::cin >> firstNumberFromUser;
	std::cout << "Podaj 2 liczbe\n";
	std::cin >> secondNumberFromUser;

	std::cout << "�rednia artmetyczna tych 2 liczb wynosi: " << (firstNumberFromUser + secondNumberFromUser) / 2.0;
}
//2. Program obliczaj�cy pole prostok�ta.
void task2()
{
	double firstSideFromUser, secondSideFromUser;
	std::cout << "Podaj a\n";
	std::cin >> firstSideFromUser;
	std::cout << "Podaj b\n";
	std::cin >> secondSideFromUser;

	std::cout << "Pole prostok�ta wynosi " << (firstSideFromUser * secondSideFromUser);
}
//3. Program obliczaj�cy obj�to�� sto�ka.
void task3()
{
	double coneHeightFromUser, coneRadiusFromUser;
	std::cout << "Podaj wysoko��\n";
	std::cin >> coneHeightFromUser;
	std::cout << "Podaj promie�\n";
	std::cin >> coneRadiusFromUser;

	std::cout << "Obj�to�� sto�ka wynosi " << (1.0 / 3.0 * M_PI) * pow(coneRadiusFromUser, 2) * coneHeightFromUser;
}
//4. Program obliczaj�cy pole ko�a.
void task4()
{
	double circleRadiusFromUser;
	std::cout << "Podaj promie� ko�a\n";
	std::cin >> circleRadiusFromUser;

	std::cout << "Pole ko�a wynosi " << M_PI * pow(circleRadiusFromUser, 2);
}
//5. Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
	double firstNumberFromUser, secondNumberFromUser;
	std::cout << "Podaj 1 liczbe\n";
	std::cin >> firstNumberFromUser;
	std::cout << "Podaj 2 liczbe\n";
	std::cin >> secondNumberFromUser;

	std::cout << "a^2+b^2 wynosi " << pow(firstNumberFromUser, 2) + pow(secondNumberFromUser, 2);
}
//6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
	double triangleBaseFromUser, triangleHeightFromUser;
	std::cout << "Podaj podstawe tr�jk�ta\n";
	std::cin >> triangleBaseFromUser;
	std::cout << "Podaj wysoko�� tr�jk�ta\n";
	std::cin >> triangleHeightFromUser;

	std::cout << "Pole tr�jk�ta wynosi " << (triangleBaseFromUser * triangleHeightFromUser) / 2.0;
}
//7. Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
	double sphereRadiusFromUser;
	std::cout << "Podaj promie� kuli\n";
	std::cin >> sphereRadiusFromUser;

	std::cout << "Obj�to�� kuli wynosi " << (4.0 / 3.0 * M_PI) * (pow(sphereRadiusFromUser, 3));
}
//8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
	double firstTrapezeBaseFromUser, secondTrapezeBaseFromUser, trapezeHeightFromUser;
	std::cout << "Podaj 1 podstawe trapezu\n";
	std::cin >> firstTrapezeBaseFromUser;
	std::cout << "Podaj 2 podstawe trapezu\n";
	std::cin >> secondTrapezeBaseFromUser;
	std::cout << "Podaj wysoko�� trapezu\n";
	std::cin >> trapezeHeightFromUser;


	std::cout << "Pole trapezu wynosi " << ((firstTrapezeBaseFromUser + secondTrapezeBaseFromUser) * trapezeHeightFromUser) / 2;
}
//9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{
	double firstNumberFromUser, secondNumberFromUser, thirdNumberFromUser,
		firstNumberWeightFromUser, secondNumberWeightFromUser, thirdNumberWeightFromUser;
	std::cout << "Podaj 1 liczbe\n";
	std::cin >> firstNumberFromUser;
	std::cout << "Podaj wage 1 liczby\n";
	std::cin >> firstNumberWeightFromUser;
	std::cout << "Podaj 2 liczbe\n";
	std::cin >> secondNumberFromUser;
	std::cout << "Podaj wage 2 liczby\n";
	std::cin >> secondNumberWeightFromUser;
	std::cout << "Podaj 3 liczbe\n";
	std::cin >> thirdNumberFromUser;
	std::cout << "Podaj wage 3 liczby\n";
	std::cin >> thirdNumberWeightFromUser;

	double amountOfNumbers = (firstNumberFromUser * firstNumberWeightFromUser) +
		(secondNumberFromUser * secondNumberWeightFromUser) +
		(thirdNumberFromUser * thirdNumberWeightFromUser);
	double amountOfWeight = ((firstNumberWeightFromUser + secondNumberWeightFromUser + thirdNumberWeightFromUser));

	double WeightedAverage = amountOfNumbers / amountOfWeight ;

	std::cout << "�rednia wa�ona tych liczb wynosi " << WeightedAverage;
}
int main()
{
	setlocale(LC_CTYPE, "Polish");

	task9();


}


