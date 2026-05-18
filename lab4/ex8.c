// Create a program which gets two strings and input and determines which one
// precedes the other in lexicographical order.

#include <stdio.h>
#include <stdlib.h>

int main() {
  char str1[] = "Hi";
  char str2[] = "Hello2";

  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] > str2[i]) {
      printf(" str2(%s) precedes \n", str2);
      exit(0);
    } else if (str1[i] < str2[i]) {
      printf(" str1(%s) precedes \n", str1);
      exit(0);
    }
    i++;
  }
  if (str1[i] == '\0' && str2[i] == '\0') {
    printf("both equal\n");
  } else if (str1[i] == '\0') {
    printf(" str1(%s) precedes \n", str1);
  } else {
    printf(" str2(%s) precedes \n", str2);
  }
}
