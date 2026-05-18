// Change the value of a variable via a pointer.

#include <stdio.h>

int main() {

  int num = 9;

  int *p = &num; // p is pointing to num

  printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);

  *p = 5;

  printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);
}
