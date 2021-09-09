#include <iostream>
using namespace std;

void simpleCalculator();
void sweetsCalculator();
void bmiCalculator();
void avgCalculator();
void multiTable();

int main() 
{
	int userChoice;
	cout << "**My first calculator**" << endl;
	cout << "Please, select a calculator:" << endl;
	cout << "1. Simple calculator" << endl;
	cout << "2. Sweets calculator" << endl;
	cout << "3. BMI calculator" << endl;
	cout << "4. Average calculator" << endl;
	cout << "5. Multiplication table" << endl;
	cin >> userChoice;
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
		cout << "Not valid operation!" << endl;
	}

	system("pause>0");
}

void simpleCalculator()
{
	float num1, num2;
	char operation;
	cout << "Please, enter numbers and operator eg. 2+2" << endl;
	cin >> num1 >> operation >> num2;

	switch (operation)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		if (num2 == 0) cout << "Don't divide by 0!";
		else cout << num1 / num2 << endl;
		break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);
		isNum2Int = ((int)num2 == num2);

		if (isNum1Int && isNum2Int)
			cout << (int)num1 % (int)num2 << endl;
		else
			cout << "Not valid!";
		break;
	default:
		cout << "Not valid operation!" << endl;
	}
}

void sweetsCalculator()
{
	int sweets, students, sweetsPerStudent, sweetsForYou;

	cout << "How many sweets did you buy? ";
	cin >> sweets;

	cout << "How many studenst is in your class? ";
	cin >> students;

	sweetsPerStudent = sweets / (students - 1);

	sweetsForYou = sweets % (students - 1);

	cout << "You have " << sweetsPerStudent << " sweets for one student and " << sweetsForYou << " sweets for you." << endl;
}

void bmiCalculator()
{
	float weight, height, bmi;

	cout << "Enter your weight(kg), height(m): ";
	cin >> weight >> height;

	bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "You are underweight. Buy more sweets!" << endl;
	else if (bmi > 25)
		cout << "You are overweight. You eat too much sweets!" << endl;
	else
		cout << "You are normal weight." << endl;

	cout << "Your BMI is " << bmi;
}

void avgCalculator() 
{

	int grade, sum = 0;

	for (int i = 0; i < 3; i++) {

		do {
			cout << "Enter grade " << i + 1 << ": ";
			cin >> grade;
		} while (grade < 1 || grade > 5);
		sum += grade;
	}

	cout << "Sum = " << sum << endl;
	cout << "Avg grade = " << sum / 3.0 << endl;
}

void multiTable() 
{
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << " = " << i * j << endl;
		}
		cout << endl;
	}
}