//C++ LinearSearch
#include <iostream>
#include <format>
using namespace std;

int LSearch(int arr[], int size, int target) //Search function
{
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == target)
		{
			count = count + 1;
			return i;
			break;
		}
	}

	if (count == 0)
		return -1;
}

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int target = 0;

	cout << "input target integer...";
	cin >> target;

	int arrindex = LSearch(arr, sizeof(arr) / sizeof(int), target);

	if (arrindex == -1)
		cout << target << " doesn't exist in array\n";

	else if (arrindex != -1)
		cout << format("{} exists in array\n Index is [{}]\n", target, arrindex);

	return 0;
}
