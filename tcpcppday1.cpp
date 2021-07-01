//http://tcpschool.com/cpp/intro <I'm studyint cpp in tcpschool.com in webpage>
/*
* C++ 프로그래밍의 특징 3가지
* 
1. C++은 절차 지향적이며 구조적 프로그래밍 언어입니다.

2. C++은 객체 지향 프로그래밍 언어입니다.

3. C++은 일반화 프로그래밍 언어입니다.
*/


//main code----------------------------------------------------------------------------------------- 
#include<iostream>
#define TEXT "Hello, world!!"

int main(void)
//input으로 아무것도 받지 않고 output으로 정수값을 반환(return)한다.
{
	std::cout << "Hello, world!";
	std::cout << "\n";
	std::cout << TEXT;
	return 0; //앞부분에서 말했 듯이 output으로 정수값을 반환(return)하므로, 정수 0을 정상적으로 반환함.
}
//main code end--------------------------------------------------------------------------------------


/* 실행 결과
Hello, world!
Hello, world!!
*/


