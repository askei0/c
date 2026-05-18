// Print if the number is positive or negative or zero.

#include<stdio.h>

int main()
{
    int num = 0;

    scanf("%d", &num);

    // if (num > 0 )
    // {
    //     printf("%d is positive\n",num);
    // }
    // else if(num < 0)
    // {
    //     printf("%d is negative\n",num);
    // }
    // else{
    //     printf("%d is zero\n",num);
    // }
    printf(num > 0 ? "positive\n" : num < 0 ? "negative\n" : "zero\n");
}
