//Fig. 16.1 
//Define class GradeBook with a member function displayMessage,
//create a GradeBook object, and call its displayMessage function.

#include <iostream>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	//function that displays a welcome message to the GradeBook user
	void displayMessage()
	{
		cout << "Welcome to the Grade Book!" << endl;
	}
};

int main(void)
{
	GradeBook myGradeBook; //create a GradeBook object named myGradeBook
	myGradeBook.displayMessage(); //call object's displayMessage function
	
	return 0;
}

/* [console result]
Welcome to the Grade Book!
*/
