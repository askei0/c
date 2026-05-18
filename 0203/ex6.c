//create a program which calculates the length of a string.

#include<stdio.h>

int strLen(char arr[]){

	//HI\0
	int counter = 0;
	while(arr[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

int main()
{
	char arr1[] = {'H','i','!','\0'};
//				     ^
	char arr2[] = "Hi!";

	char str[100] = "Hello";

	printf("%s\n",str);

	//printf("Length if Arr1: %d, arr2: %d", strLen(arr1), strLen(arr2));
}
// Senin hayallerin icin bir adim daha.
