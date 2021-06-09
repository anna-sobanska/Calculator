#include <iostream>

int main() {
	float num1, num2;
	char operation;
	std::cout << "**My first calculator**" << std::endl;
	std::cout << "Please type an operation:" << std::endl;
	std::cin >> num1 >> operation >> num2;

	switch (operation)
	{
	case '+':
		std::cout << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << num1 / num2 << std::endl;
		break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);

		if (isNum1Int && isNum2Int)
			std::cout << (int)num1 % (int)num2 << std::endl;
		else
			std::cout << "Not valid!";
		break;
	default:
		std::cout << "Not valid operation!" << std::endl;
	}

	system("pause>0");
}