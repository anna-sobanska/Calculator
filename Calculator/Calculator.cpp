#include <iostream>

void simpleCalculator();

int main() {
	int userChoice;
	std::cout << "**My first calculator**" << std::endl;
	std::cout << "Please, select a calculator:" << std::endl;
	std::cout << "1. Simple calculator" << std::endl;
	std::cout << "2. Sweets calculator" << std::endl;
	std::cout << "3. BMI calculator" << std::endl;
	std::cin >> userChoice;
	
	switch (userChoice)
	{
	case 1:
		simpleCalculator();
		break;
	case 2:
		std::cout << "Sweets Calculator" << std::endl;
		break;
	case 3:
		std::cout << "BMI Calculator "<< std::endl;
		break;
	default:
		std::cout << "Not valid operation!" << std::endl;
	}

	system("pause>0");
}