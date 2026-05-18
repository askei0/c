//write a reccursive function that calculates the factorial of a given number
//
//
#include <stdio.h>
#include <stdlib.h>

int factorial(int num1)
{
    if(num1 == 0 || num1 == 1)
    {
        return 1;
    }

    return num1 * factorial(num1 - 1);
}

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("exactly 1 arg needed\n");
        return -1;
    }

    int num = atoi(argv[1]);

    printf("result: %d\n", factorial(num));

    return 0;
}
