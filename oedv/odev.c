#include <stdio.h>

int sumReturn(int a, int b)
{
    return a + b;
}

void sumPointer(int a, int b, int *result)
{
    *result = a + b;
}

int main()
{
    int a = 5, b = 7;
    int result1, result2;
    int num;

    result1 = sumReturn(a, b);
    sumPointer(a, b, &result2);

    printf("Result with return: %d\n", result1);
    printf("result with pointer: %d\n", result2);

    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("scanf changed the value using a pointer: %d\n", num);

    return 0;
}
