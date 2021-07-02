//Fig. 15.6
//Initializing and using a reference

#include <iostream>

using namespace std;

int main(void)
{
	int x=3;
	int &y = x; //y refers to (is an alias for) x
//	int &y; This is a syntax ERROR! y must be initialized!
	
	cout << "x= " << x << endl <<"y= " << y << endl;
	y=7; //actually modifies x
	
	cout << "x= " << x << endl <<"y= " << y << endl;
	
	return 0;
}

/* [expected result]
x=3
y=3
x=7
y=7
*/

/* [console result]
x= 3
y= 3
x= 7
y= 7
*/
