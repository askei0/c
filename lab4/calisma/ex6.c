//Calculate the average of some floating point numbers in an array.

#include <stdio.h>

float arrSum(float arr[], int size)
{
	float sum = 0.0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

float average(float sum, int size) {

	float avg = 0.0;
	avg = sum / size;

	return avg;
}

int main() {

	float arr[] = {2.3,2.4,5.4,6.4,7.4};

	int size = sizeof(arr) / sizeof(arr[0]);

	float sum = arrSum(arr, size);

	printf("%.2f", average(sum, size));
}






