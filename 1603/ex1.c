//print the numbeer of arguments to the console. explain why this numbeer is less than 1.

#include<stdio.h>

int main(int argc, char *argv[]){

	printf("argc: %d\n", argc);

	for(int i = 0; i<argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
}
