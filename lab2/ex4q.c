// Create a program where you compute the area of a square or a circle.
//  Get the length of the square and the radius of the circle from the user.
// Use the function scanf("%f", &a).
//  Use the operator & which returns the address of a variable. The value of pi
//  should be 3.1415.

#include <stdio.h>

int main() {
  int length;
  float radius;
  float pi = 3.1415;
  printf("Enter the length of the square: ");
  scanf("%d", &length);

  int area = length * length;

  printf("Area = %d\n", area);

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  float carea = pi * radius * radius;
  printf("Area = %f\n", carea);
}
