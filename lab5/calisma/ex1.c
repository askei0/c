// Change the value of a variable via a pointer.

#include <stdio.h>

int main(){
	int n = 9;
	printf("Before changing n = %d\n", n);
	
	int *p = &n;

	*p = 3;
	printf("*p = %d, n = %d\n",*p, n);

	return 0;
}
