// create program which prints the greatest element of an array.

#include<stdio.h>

int greatestElem(int arr[], int size)
{
	int max = arr[0];

	for(int i = 1; i < size; ++i)
	{
		max = (arr[i] > max)? arr[i]: max; 
	}

	return max;
}

int main(){

	int arr[5] = {3,4,1,0,2};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Max element: %d\n", greatestElem(arr, size));

}
