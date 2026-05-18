//Create a program which swaps the smallest and greatest elements of an array.
#include <stdio.h>

int minVal(int arr[], int size)
{
	int minval = arr[0];
	int minind = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < minval)
		{
			minval = arr[i];
			minind = i;
		}
	}
	return minind;
}
int maxVal(int arr[], int size){
	int maxval = arr[0];
	int maxind = 0;

	for (int i = 0; i < size; ++i){
		if (arr[i] > maxval){
			maxval = arr[i];
			maxind = i;
		}
	}
	return maxind;
}

int main() {
	int arr[5] = {10,70,60,50,90};

	int size = sizeof(arr) / sizeof(arr[0]);

	int max = maxVal(arr, size);
	int min = minVal(arr, size);

	int tempmax = arr[max];
	arr[max] = arr[min];
	arr[min] = tempmax;

	for (int i = 0; i < size; ++i)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
}
