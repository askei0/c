//Create a program which calculates the weighted sum of an array.
//The weights are listed in another array. For example: first array: [1, 2, 3, 4, 5],
//second array: [1, 1, 2, 3, 5]. Weighted sum: 1*1 + 1*2 + 2*3 + 3*4 + 5*5.
#include <stdio.h>

int weighted(int arr1[], int arr2[], int size) 
{
	int wsum = 0;

	for (int i = 0; i < size; ++i)
	{
		wsum += arr1[i] * arr2[i];	
	}
	return wsum;
}

int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,1,2,3,5};
	int size = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d \n" , weighted(arr1, arr2, size));
}
