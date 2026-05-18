//average of two integers

#include<stdio.h>

int main()
{
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("the average of two integers %.2f\n",(float)(num1+num2)/2);
}
