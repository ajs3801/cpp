//Fig. 15.5
// Comparing pass-by-value and pass-by-reference with references.

#include <iostream>

using namespace std;


//side-function prototype
int squareByValue(int);
void squareByReference(int&);
//side-function prototype

//main code-------------------------------------------------------------------------------------------
int main(void)
{
	int x = 2; //value to square using squareByValue
	int z = 4; //vlaue to square using squareByReference

	//demonstrate squareByValue
	cout << "x= " << x << " before squareByValue" <<endl;
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x= " << x << " after squareByValue\n" << endl;

	//demonstrate squareByReference
	cout << "z= " << z << " before squareByReference" << endl;
	squareByReference(z);
	cout << "z= " << z << " after squareByReference" << endl;

	return 0;
}
//main code end-------------------------------------------------------------------------------------------

//side-function-------------------------------------------------------------------------------------------
int squareByValue(int number)
{
	return number = number * number;
}

void squareByReference(int& numberRef)
{
	numberRef = numberRef * numberRef;
}
//side-function end---------------------------------------------------------------------------------------

/* [console result]
x= 2 before squareByValue
Value returned by squareByValue: 4
x= 2 after squareByValue

z= 4 before squareByReference
z= 16 after squareByReference
*/

