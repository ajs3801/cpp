//Fig. 15.8
//Using default arguments

#include <iostream>

using namespace std;

int boxVolume (int length = 1, int width = 1, int height = 1);

int main(void)
{
	//no arguments -- use default value for all dimensions
	cout << "The default box volume is: " << boxVolume() << endl;
	
	//specify lenght
	cout << "The volume of a box with length 10 is " << boxVolume(10) << endl;
	
	//specify length and width
	cout << "The volume of a box with length 10 width 5 is " << boxVolume(10,5) << endl;
	
	//specify length , width , and height
	cout << "The volume of a box with length 10 width 5 height 2 is " << boxVolume(10,5,2) << endl;
	
	return 0;
}

int boxVolume (int length , int width, int height)
{
	return length * width * height;
}
