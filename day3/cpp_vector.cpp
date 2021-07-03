//Fig. 15.14
// Demonstrating C++ Standard Library class template vector.

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector(const vector< int > &); //display the vector.
void inputVector(vector< int > &); //input values into the vector.

int main(void)
{
	vector< int > integers1(7); //7-element vector<int>
	vector< int > integers2(10); //10-element vector<int>

	//print integers1 size and contents
	cout << "Size of vector integers1 is " << integers1.size()
		<< "\nvector after initialization: " << endl;
	outputVector(integers1);

	//print integers2 size and contents
	cout << "Size of vector integers2 is " << integers2.size()
		<< "\nvector after initialization: " << endl;
	outputVector(integers2);

	//input and print integers1 and integers2
	cout << "\nEnter 17 integers: " << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n"
		<< "integers1: " << endl;
	outputVector(integers1);
	cout << "integers2: " << endl;
	outputVector(integers2);

	return 0;
}
