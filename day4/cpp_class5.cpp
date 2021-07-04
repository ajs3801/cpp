//Fig. 16.7
// Using header file!!!

#include <iostream>
#include <string>
#include "cpp_class5_GradeBook.h"
using namespace std;

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
