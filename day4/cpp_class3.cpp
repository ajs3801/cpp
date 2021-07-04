//Fig. 16.5
//Define class GradeBook that contains a courseName data member
//and member functions to set and get its value
//Create and manipulate a GradeBook object with these functions

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	}

private:
	string courseName;
};

int main(void)
{
	string nameOfCourse;
	GradeBook myGradeBook;

	//display initial value of courseName
	cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

	//prompt for, input and set course name
	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse); //set the course name

	cout << endl;
	myGradeBook.displayMessage();

	return 0;
}

/* [console result]
Initial course name is:

Please enter the course name:
c++ Programming

Welcome to the grade book for
c++ Programming!
*/
