// Assign a new value to the previous variable (it can be a constant value or can be read from the user with scanf()) and print if the value is even or odd.

#include<stdio.h>

int main()
{
    int num = 0;
    
    scanf("%i", &num);

    printf(num % 2 == 0 ? "Even\n" : "Odd\n");
    
    // if (num % 2 == 0)
    // {
    //     printf("%d is Even\n", num);
    // }
    // else
    // {
    //     printf("%d is Odd\n", num);
    // }

}