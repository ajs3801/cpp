//Fig. 16.3
//Define class GradeBook with a member function that takes a parameter,
//create a GradeBook object and call its displayMessage function.

#include <iostream>
#include <string>
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
	void displayMessage(string courseName)
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	}
};

int main()
{
	string NameofCourse;
	GradeBook myGradeBook;

	//prompt for and input course name
	cout << "Please enter the course name: " << endl;
	getline(cin, NameofCourse);
	//what is getline?
	//in https://en.cppreference.com/w/cpp/string/basic_string/getline
	//getline reads characters from an input stream and places them into a string
	cout << endl;

	myGradeBook.displayMessage(NameofCourse);

	return 0;
}

/* [console result]
Please enter the course name:
CS101 C++ Programming

Welcome to the grade book for
CS101 C++ Programming!
*/
