// 7. Write a new program that reads the file created by exercise number 6,
// \ and adds the numbers (of the file) together. Write the output on the console.

#include<stdio.h>


int main(){
    FILE* fp = fopen("lines.txt","r");

    if(fp == NULL){
        printf("File access failed\n");
        return -1;
    }

    // fscanf
    // fgets
    // getc

    char str[101];
    while(fgets(str,100,fp) != NULL)
    {
      printf("%s", str);
    }
    
    fclose(fp);
}