// 6 - Declare an int variable and print its value. Notice what the initial value of a variable is.

#include <stdio.h>

int main()
{
    int num = 0;

    scanf("%i", &num);

    // if (num % 2 == 0)
    // {
    //     printf("%d is Even\n", num);
    // }
    // else
    // {
    //     printf("%d is Odd\n", num);
    // }

    printf(num%2==0?"Even\n":"Odd\n");

    // int num = true||false?5:4;

    // 7 - Assign a new value to the previous variable
    //  (it can be a constant value or can be read from the user with scanf()
    // ) and print if the value is even or odd.


    // 8 -Print if the number is positive or negative or zero.

    // if (num > 0){
    //     printf("%d is Positive\n", num);
    // }else if(num < 0){
    //     printf("%d is negative\n", num);
    // }else{
    //     printf("%d is ZERO\n", num);
    // }

    printf(num>0?"Positive\n": num < 0 ? "Negative\n" :"ZERO\n");


}