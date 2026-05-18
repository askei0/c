//  Create a program which gets an integer and reverses it. Use only arithmetic operations. E.g. 12345 -> 54321.

#include<stdio.h>

// 12345 % 10 == 5
// 12345 / 10 => 1234.5 =int> 1234
// 1234 % 10 = 4;
// 5 * 10 +4 = 54

// 1 % 10 = 1
// 1 / 10 = 0


int main()
{
    int num;
    scanf("%d", &num);

    int reversed = 0;
    
    while(num != 0)
    {
        int lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit; // 5
        num = num / 10; // 1234
    }

    printf("Reversed is: %d\n", reversed);

}
