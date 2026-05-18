// Create a program where you compute the area of a square and a circle. Get the length of the square and the radius of the circle from the user.

#include<stdio.h>

int main()
{   
    float length;
    printf("Enter Length of square: ");
    scanf("%f", &length);

    printf("Area of the square is: %.2f\n", length * length );

}
