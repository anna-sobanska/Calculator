#include <iostream>

void simpleCalculator();
void sweetsCalculator();
void bmiCalculator();
void avgCalculator();
void multiTable();


int main() {
	int userChoice;
	std::cout << "**My first calculator**" << std::endl;
	std::cout << "Please, select a calculator:" << std::endl;
	std::cout << "1. Simple calculator" << std::endl;
	std::cout << "2. Sweets calculator" << std::endl;
	std::cout << "3. BMI calculator" << std::endl;
	std::cout << "4. Average calculator" << std::endl;
	std::cout << "5. Multiplication table" << std::endl;
	std::cin >> userChoice;
	system("cls");
	
	switch (userChoice)
	{
	case 1:
		simpleCalculator();
		break;
	case 2:
		sweetsCalculator();
		break;
	case 3:
		bmiCalculator();
		break;
	case 4:
		avgCalculator();
		break;
	case 5:
		multiTable();
		break;
	default:
		std::cout << "Not valid operation!" << std::endl;
	}

	system("pause>0");
}