//write a program which writes the even elements of an integer array to a file
//called "even_numbers.txt" RUn this program several times,
//and explain why the file remains the same.

#include<stdio.h>

int main (int argc, char* argv[])
{
	
	if (argc != 2)
	{
		printf("one file name needed\n");
		return -1;
	}

	FILE* fp = fopen(argv[1], "w");
	if(fp == NULL){
		printf("file openning failed\n");
		return -1;
	}

	int arr[] = {2,3,4,5,6,7,8,9,10};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < size; ++i)
	{
		if(arr[i] %2 == 0)
		{
			fprintf(fp,"%d\n",arr[i]);
		}
	}





}
