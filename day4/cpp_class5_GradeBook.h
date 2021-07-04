#pragma once
//GradeBook class definition in a seperate file from main.
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
