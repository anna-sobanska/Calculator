#include <iostream>

void sweetsCalculator()

{
	int sweets, students, sweetsPerStudent, sweetsForYou;

	std::cout << "How many sweets did you buy? ";
	std::cin >> sweets;

	std::cout << "How many studenst is in your class? ";
	std::cin >> students;

	sweetsPerStudent = sweets / (students - 1);

	sweetsForYou = sweets % (students - 1);

	std::cout << "You have " << sweetsPerStudent << " sweets for one student and " << sweetsForYou << " sweets for you." << std::endl;
}