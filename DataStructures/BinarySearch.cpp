//version1 [1~5까지는 인덱스번호가 나오는데 6부터 11까지는 배열에 존재하지 않는다고 나온다...]
#include <iostream>
#include <format>
using namespace std;

int BSearch(int arr[], int size, int target)
{
	int start = 0, end = size;
	int IsItTrue = 0; //If target doesn't exist in array
	int* StartPtr = &arr[start], * EndPtr = &arr[end];

	while (true)
	{
		int middle = (start + end) / 2;

		if (arr[middle] == target)
		{
			return middle;
			IsItTrue = 1; //If target exists in array, IsItTrue's value change to 1
			break;
		}

		if (arr[middle] < target)
		{
			int end = middle - 1;
			* EndPtr = &arr[end];
		}
			
		
		if (arr[middle] > target)
		{
			int start = middle + 1;
			* StartPtr = &arr[start];
		}


		if (StartPtr == EndPtr)
			break;
	}

	if (IsItTrue == 0) //If IsItTrue value is still 0, this means that target doesn't exist in array.
		return -1;
}
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10,11 };

	int target = 0;
	cout << "Input target integer...";
	cin >> target;

	int index = BSearch(arr, sizeof(arr) / sizeof(int), target);

	if (index == -1)
		cout << format("{} doesn't exist in array\n", target);

	else if (index != -1)
		cout << format("{} exists in array\n index number is [{}]", target, index);

	return 0;
}
