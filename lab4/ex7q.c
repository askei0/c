// Create a program which calculates the length of a string.

#include <stdio.h>
#include <string.h>

int strLen(char arr1[]) {

  int counter = 0;
  while (arr1[counter] != '\0') {
    counter++;
  }
  return counter;
}

int main() {

  char arr1[] = {'H', 'I', '!', '\0'};
  char arr2[] = "HI!";

  printf("%s\n", arr2);

  printf("Length of a string (lib): %d (function): %d\n", strlen(arr2),
         strLen(arr1));
}
