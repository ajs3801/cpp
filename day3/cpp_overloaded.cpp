//Fig. 15.10
//Overloaded square functions

#include <iostream>

using namespace std;

// function square for int values
int square(int x)
{
	cout << "square of integer " << x << " is ";
	return x*x;
}


// function square for double values
double square (double x)
{
	cout << "square of double " << x << " is ";
	return x*x;
}

int main(void)
{
	cout << square(7); //calls int-version function
	cout << endl;
	
	cout << square(7.5); //calls double-version function
	cout << endl;
	
	return 0;
}

/* [console result]
square of integer 7 is 49
square of double 7.5 is 56.25
*/

