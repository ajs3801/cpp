//cout�� cin
//���� ���� cout�� print�ϴ� ���̰� cin�� scan�ϴ� ���̴�.
//cout = console output�� ���Ӹ��̰�, cin�� console input�� ���Ӹ��̴�. 

//������ �̸� Ȱ���� project�� 
//[project1] 
// 2���� ���ڸ� �Է¹޾� 2���� ���ڸ� ���� ���� ����ϴ� ������ ���α׷� 

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
