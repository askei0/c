// Can you create a pointer to itself? What would be its type? Why not?
//  Compare the sizes of pointers to different types of variables. Explain why the result is logical!



#include<stdio.h>


int main(){

    printf("size of int*: %lu bytes\n", sizeof(int*));
    printf("size of float*: %lu bytes\n", sizeof(float*));
    printf("size of double*: %lu bytes\n", sizeof(double*));
    printf("size of long long int*: %lu bytes\n", sizeof(long long int*));
    printf("size of void*: %lu bytes\n", sizeof(void*));
}
