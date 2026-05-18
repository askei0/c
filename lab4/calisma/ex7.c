// Create a program which calculates the length of a string.
#include <stdio.h>

int main(){

	char a[] = {'H', 'I', '!', '\0'};

	int length = 0;

	while (a[length] != '\0')
	{
		length++;
	}
	printf("%d\n", length);
}
