// Create a program in which you divide two numbers. Print the result.
//  What happens if the divisor is 0? What happens if we use int or float variables?
// Use %f formatting character. Print the result with two decimals.
// Use %d formatting character. Check what happens.
// Use -W, -Wall, -Wextra and -pedantic flags. Does it result a compilation error when a wrong formatting character is used?
// you can check the different formats here 


#include<stdio.h>



int main(void){
    int num1 = 7, num2 = 2;
    float result = (float)num1 / num2; 
    printf("%d / %d = %.2f\n", num1, num2, result);
}


