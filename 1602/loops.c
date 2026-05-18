#include <stdio.h>

int main()

{

    int i = 5;

    while (i > 0)
    {
        printf("Hello\n");
        i--;
    }

    printf("DO WHILE\n");
    i = 5;

    do
    {
        printf("Hello\n");
        i--;
    } while (i > 0);

    for (i = 5; i > 0; i--)
    {
        printf("Hello for loop\n");
    }
}
