// write out how many bytes your computer represents an int, long int, unsigned int, unsigned long int, char ,bool. float .double. long double value.

#include<stdio.h>
#include<stdbool.h>




int main(){

    printf("Size of int: %lu byte(s) (on this device)\n", sizeof(int));
    printf("Size of long int: %lu byte(s) (on this device)\n", sizeof(long int));
    printf("Size of long long int: %lu byte(s) (on this device)\n", sizeof(long long int));

    printf("Size of unsigned int: %lu byte(s) (on this device)\n", sizeof(unsigned int));
    printf("Size of unsigned long int: %lu byte(s) (on this device)\n", sizeof(unsigned long int));

    printf("Size of char: %lu byte(s) (on this device)\n", sizeof(char));
    printf("Size of bool: %lu byte(s) (on this device)\n", sizeof(bool));
    printf("Size of float: %lu byte(s) (on this device)\n", sizeof(float));
    printf("Size of double: %lu byte(s) (on this device)\n", sizeof(double));
    printf("Size of long double: %lu byte(s) (on this device)\n", sizeof(long double));



}
