#include <stdio.h>

int getSquare(int num)
{
    return num * num;
}

void getCube(int num, int *result)
{
    *result = num * num * num;
}

int main()
{
    int num;
    int square;
    int cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = getSquare(num);
    getCube(num, &cube);

    printf("Square with return: %d\n", square);
    printf("Cube with pointer: %d\n", cube);

    return 0;
}
