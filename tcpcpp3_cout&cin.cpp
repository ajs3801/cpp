//cout와 cin
//쉽게 말해 cout는 print하는 것이고 cin은 scan하는 것이다.
//cout = console output의 줄임말이고, cin은 console input의 줄임말이다. 

//다음은 이를 활용한 project임 
//[project1] 
// 2개의 숫자를 입력받아 2개의 숫자를 더한 값을 출력하는 간단한 프로그램 

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
