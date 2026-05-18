// Write a program that determines whether the number
// is a leap year from the standard input.
// A leap year is any year divisible by four, except those divisible by a hundred.
// However, those divisible by four hundred will also be leap years.
// 2000 is leep -  (|| = or)   (&& = and)


#include <stdio.h>
#include <stdbool.h>
 
int main() {

    printf("Enter the year\n");
    int year;
    scanf("%d", &year);
    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("%s\n", isLeap ? "is leap year" : "is not leap year");
 
    return 0;
    
}