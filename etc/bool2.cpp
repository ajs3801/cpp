//https://wikidocs.net/14027

#include <iostream>
using namespace std;

bool IsPositive(int num)
{
	if (num < 0)
		return false;

	else if (num >=0)
		return true;
}

int main(void)
{
	bool IsPos;
	int num = 0;

	cout << "Input Number_ ";
	cin >> num;

	IsPos = IsPositive(num);

	if (IsPos == true)
		cout << "It is positvie integer." << endl;

	else if (IsPos == false)
		cout << "It is negative integer." << endl;

	return 0;
}

