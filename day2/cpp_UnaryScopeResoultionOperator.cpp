//Fig. 15.9
//Using the unary scope resolution operator.

#include <iostream>

using namespace std;

int number = 7;

int main(void)
{
	double number = 10.5;
	
	cout << "Local double value of number = " << number << endl;
	
	cout << "Global int value of number = "<<::number << endl;
	
	return 0;	
}

/* [console result]
Local double value of number = 10.5
Global int value of number = 7
*/
