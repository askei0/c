//Create a program which adds up the integers of an array.

#include <stdio.h>

int arrSum(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", arrSum(arr, size));

	return 0;
}
