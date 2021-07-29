//Linear Search
#include <stdio.h>

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

	printf("Input target integer...");
	scanf_s("%d", &target);

	int arrindex = LSearch(arr, sizeof(arr) / sizeof(int), target);
	
	if (arrindex == -1)
		printf("%d doesn't exist in array\n", target);

	else if (arrindex != -1)
		printf("%d exists in array index [%d]\n", target, arrindex);

	return 0;
}
