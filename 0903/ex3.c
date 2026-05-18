//can you create a pointer to itself? what would be its type? why not?
//compare the sizes of pointers to different types of variables. explain why

#include<stdio.h>

int main(){

	printf("size of int*: %lu bytes\n", sizeof(int*));
	printf("size of float*: %lu bytes\n", sizeof(float*));
	printf("size of double*: %lu bytes\n", sizeof(double*));
	printf("size of long long int*: %lu bytes\n", sizeof(long long int*));
	printf("size of void*: %lu bytes\n", sizeof(void*));
	

}
