// Create a program where you compute the area of a square or a circle.
//  Get the length of the square and the radius of the circle from the user.
// Use the function scanf("%f", &a).
//  Use the operator & which returns the address of a variable. The value of pi should be 3.1415.

#include <stdio.h>


int main(){

    float length;
    printf("Enter Length of square: ");
    scanf("%f", &length);

    printf("Area of the square is: %.2f\n", length * length);
}
