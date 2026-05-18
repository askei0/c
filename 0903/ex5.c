//Redesign the previous function so that we get the array using a pointer to the first element and a pointer to the last element. What happens if we overindex by one? What happens if we overindex by more?

#include<stdio.h>

int arrSum(int *first, int *last)
{
	//int size = last - first + 1;

	//printf("size: %d\n", size)

	int sum = 0;

	while(first < last)
	{
		sum += *first;
		first++;
	}

	return sum;
}


int main(){

	int arr[] = {1, 2, 3, 4, 5};

	printf("Sum of arr = %d\n", arrSum(arr, &arr[size-1]));




}
