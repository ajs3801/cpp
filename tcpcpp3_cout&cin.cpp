//cout and cin
//cout prints out date and cin scans data.
//cout = console output, cin = console input

//Next is project which use cout and cin.
//[project1] 
// input 2 integer and sum two integer and print out the sum


//main code------------------------------------------------------
#include <iostream>

int main(void)
{
	int age1=0;
	int age2=0;
	int sum=0;
	
	std::cout<<"[Input first age] : "; //print
	std::cin>>age1; //scanf
	
	std::cout<<"\n";
	
	std::cout<<"[Input second age] : ";
	std::cin>>age2;
	
	
	sum = age1 + age2;
	std::cout<<sum;
	
	return 0;
} 
//main code end ---------------------------------------------------
