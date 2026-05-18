//write a program that stores our name in a "playex.txt" file

#include<stdio.h>

int main(int argc, char* argv[])
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

	fprintf(fp, "Kayra\n");

	fclose(fp);
}
