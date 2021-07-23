//https://wikidocs.net/14027

#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "True " << true << endl; //True 1
	cout << "False " << false << endl; //False 0 

	while (true) // 0 1 2 3 4 5 6 7 8 9 10
	{
		cout << i++ << ' ';
		if (i > num)
			break;
	}

	cout << endl;

	//sizeof -> x byte
	cout << "size of 1 : " << sizeof(1) << endl; // size of 1 : 4
	cout << "size of 0 : " << sizeof(0) << endl; // size of 0 : 4
	cout << "size of true : " << sizeof(true) << endl; // size of true : 1
	cout << "size of false : " << sizeof(false) << endl; // size of false : 1

	return 0;
}

