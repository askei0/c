// 14 - Create a program which gets an integer and reverses it.
//  Use only arithmetic operations. E.g. 12345 -> 54321.

#include <stdio.h>

int main() {
  int number;
  printf("Enter the number >_< ");
  scanf("%d", &number);
  int tersnumberbas;
  int tersnumber = 0;
  while (number != 0) {
    tersnumberbas = number % 10;
    tersnumber = tersnumber * 10 + tersnumberbas;
    number = number / 10;

    printf("ters: %d duz: %d >_< \n", tersnumber, number);
  }

  printf("ters: %d duz: %d >_< \n", tersnumber, number);
}
