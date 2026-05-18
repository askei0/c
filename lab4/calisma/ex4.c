
//Create a program which prints the min element of an array.

#include <stdio.h>

int min(int arr[], int size){
	
	int minval = arr[0];

	for(int i = 1; i < size; ++i)
	{
		if(arr[i] < minval)
		{
			minval = arr[i];
		}
	}
	return minval;
}

int main(){

	int arr[] = {42, 69, 72, 81, 90};

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("%d\n", min(arr, size));
}
