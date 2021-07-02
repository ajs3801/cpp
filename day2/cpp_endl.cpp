//Fig. 15.1
//Addition program that displays the sum of two numbers

#include <iostream>

int main(void)
{
	int number1;

	std::cout << "Enter first integer: ";
	std::cin >> number1;

	int number2;
	std::cout << "Enter second integer: ";
	std::cin >> number2;

	int sum = number1 + number2;

	std::cout << "Sum is " << sum << std::endl; // "endl" is as same as "\n"

	return 0;
}

/* [console result]
Enter first integer: 14
Enter second integer: 25
Sum is 39
*/

