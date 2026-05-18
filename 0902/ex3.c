//create a program in which you divide two numbers. prints the result.
//what happens if the divisor is divided by 0?

#include<stdio.h>

int main()
{
    int num1 = 7;
    int num2 = 2;
    float result = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, result);
    /*
    int num1 = 7, num2 = 2;
    float result = (float)num1 / num2;
    printf("%d / %d = %d\n", num1, num2, 3 / 0);
    */
}