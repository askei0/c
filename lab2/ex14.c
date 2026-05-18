// 14 - Create a program which gets an integer and reverses it.
//  Use only arithmetic operations. E.g. 12345 -> 54321.

#include <stdio.h>

int main()
{
    // int i = 5;
    // printf("WHILE\n");
    // while (i > 0)
    // {
    //     printf("Hello while loop\n");
    //     i--;
    // }

    // printf("DO WHILE\n");
    // i = 5;
    // do
    // {
    //     printf("Hello do-while\n");
    //     i--;
    // } while (i > 0);

    // printf("For\n");

   
    // for ( i = 5 ; i > 0; i--)
    // {
    //     printf("Hello forloop\n");
    // }



    // //12345 -> 54321.
    // 12345 % 10 == 5
    // 12345 / 10  => 1234.5 =int> 1234
    // 1234 % 10 = 4 ;
    // 5 * 10 + 4 =   54;

    // 1 % 10 = 1
    // 1 / 10 = 0

    int num;
    scanf("%d", &num);

    int reversed = 0; 

    while(num != 0)
    {
       int lastDigit =  num % 10 ; // 5
       reversed = reversed * 10 + lastDigit; // 5
       num = num / 10; // 12345 / 10 = 1234
    }

    printf("Reversed is : %d\n", reversed);
}
