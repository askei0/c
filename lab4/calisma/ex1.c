// Create a program which fills up an array with zeros.
#include <stdio.h>

int main() 
{
	int arr[] = {1, 2, 3, 4, 5};

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; ++i)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < size; ++i)
	{
		printf("%d \n", arr[i]);
	}
}
