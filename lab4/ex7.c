// Create a program which calculates the length of a string.

#include <stdio.h>
#include <string.h>

int strLen(char arr[]) {
  // HI\0
  int counter = 0;
  while (arr[counter] != '\0') {
    counter++;
  }

  return counter;
}

int main() {
  char arr1[] = {'H', 'i', '!', '\0'};
  char arr2[] = "Hi!";

  char str[100] = "Hello";

  printf("%s\n", str);

  printf("length of Arr1: %d, arr2: %d\n", strlen(arr1), strLen(arr2));
}
