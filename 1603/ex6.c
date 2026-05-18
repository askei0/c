//10. Write a program that puts arbitrary data inside a file. Before closing the file,
//blockock the program with a blocking function (i.e. scanf).

//Examine the contents of the file that we wrote before closing it. Let the program continue,
//and examine the contents of the file again.
//
#include<stdio.h>

int main(){
	FILE* fp = fopen("ex10.txt", "w");

	fprintf(fp,"Hello\n");

	int num;
	printf("Enter a num:\n");
	
	scanf("%d", &num);

	fclose(fp);

}
