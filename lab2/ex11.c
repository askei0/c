// 11- Determine the average of two integers.


#include <stdio.h>
 
int main() {
    int num1 = 0;
    int num2 = 0;
    printf("enter first num \n");
    scanf("%d",&num1);
 
    printf("enter second num \n");
    scanf("%d",&num2);
 
    printf("average: %.2f\n",(float)(num1+num2)/2);
}