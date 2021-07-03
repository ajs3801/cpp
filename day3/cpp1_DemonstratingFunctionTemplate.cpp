//Fig. 15.13
//Demonstrating function template maximum

#include <iostream>

using namespace std;

#include "cpp_maximum.h" //include definition or function template maximum

int main(void)
{
	//----------------------------
	int int1, int2, int3;
	
	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;
	
	cout << "The maximum integer value is " << maximum(int1, int2, int3);
	
	//-----------------------------
	double double1,double2,double3;
	
	cout <<"\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;
	
	cout << "The maximum double value is: " << maximum(double1, double2, double3);
	
	//----------------------------
	char char1,char2,char3;
	
	cout << "\n\nInput three characters: ";
	cin >> char1 >> char2 >> char3;
	
	cout << "The maximum character value is " << maximum(char1, char2, char3) << endl;
	
	return 0;
}

/* [console result]
Input three integer values: 1 1 1
The maximum integer value is 1

Input three double values: 2.345 3.4124 9.12341
The maximum double value is: 9.12341

Input three characters: A B D
The maximum character value is D
*/
