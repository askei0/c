// Create a program which calculates the weighted sum of an array. The weights are listed in another array. For example: first array: [1, 2, 3, 4, 5], second array: [1, 1, 2, 3, 5]. Weighted sum: 1*1 + 1*2 + 2*3 + 3*4 + 5*5.
#include<stdio.h>

int weightedSum(int arr[], int arr2[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i] * arr2[i];
	}
	return sum;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int arr2[5] = {1,1,2,3,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int result = weightedSum(arr, arr2, size);

	printf("Weighted sum: %d\n", weightedSum(arr, arr2, size));

	return 0;

}
