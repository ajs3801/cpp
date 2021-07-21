/*sigma*/

#include <iostream>
using namespace std;



int main(void)
{
	int UserNumber;
	int result = 0;
	cout << "[Input integer]: ";
	cin >> UserNumber;

	for (int i = 1; i <= UserNumber; ++i)
	{
		result = result + i;
		if (i != UserNumber)
			cout << i << " + ";

		else
			cout << i << " = ";
	}

	cout << result;
}

/*
[Console Result]
1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
*/
