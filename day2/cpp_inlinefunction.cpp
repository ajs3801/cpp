//Fig. 15.3
//inline function that calculates the volume of a cube

#include <iostream>

using namespace std;


inline double cube(const double side) //inline function means that this function is in line(code)
{
	return side * side * side; //calculate the cube of side
}

//main code-------------------------------------------------------------------------------------------
int main(void)
{
	double sideValue;
	
	for(int i=0 ; i<3 ; ++i)
	{
		cout << "\nEnter the side length of your cube: ";
		cin >> sideValue;
		
		cout << "Volume of cube with side" << sideValue << " is " <<cube(sideValue) << endl;
	}
	
	return 0;
}
//main code end----------------------------------------------------------------------------------------

/* [console result]
Enter the side length of your cube: 2
Volume of cube with side2 is 8

Enter the side length of your cube: 3
Volume of cube with side3 is 27

Enter the side length of your cube: 4
Volume of cube with side4 is 64
*/
