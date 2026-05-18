//Create a program which prints the greatest element of an array.

#include <stdio.h>

int greatest(int arr[], int size){
	
	int maxval = arr[0];

	for(int i = 1; i < size; ++i)
	{
		if(arr[i] > maxval)
		{
			maxval = arr[i];
		}
	}
	return maxval;
}

int main(){

	int arr[] = {42, 69, 72, 81, 90};

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", greatest(arr, size));
}
