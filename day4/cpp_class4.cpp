//Fig. 16.7
//Instantiating multiple objects of the GradeBook class and using
//the GradeBook constructor to specify the course name
//when each GradeBook object is created

#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string name)
	{
		setCourseName(name); //call set function to initalize courseName
	}

	void setCourseName(string name)
	{
		courseName = name; //store the course name in the object
	}

	string getCourseName()
	{
		return courseName; //return object's courseName
	}

	void displayMessage()
	{
		cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
	}//call getCourseName to get the courseName

private:
	string courseName; //course name for this GradeBook
};

int main(void)
{
	GradeBook gradeBook1("CS101 Introdunction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\n"
		<< "gradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;

	return 0;
}

/* [console result]
gradeBook1 created for course: CS101 Introdunction to C++ Programming
gradeBook2 created for course: CS102 Data Structures in C++
*/
