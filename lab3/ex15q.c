// Determine the greatest common divisor of two integers.
// It can be brute-force, subtraction method, Euclidean-algorithm.

#include<stdio.h>
int main()
{

    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (a != b)
    {

        if (a < b)
            b -= a;
        else
            a -= b;
    }
    printf("GCD is %d\n",a);
}