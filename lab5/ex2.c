// Change the value of a pointer through a pointer to a pointer.
//  Then change the value pointed by the pointed pointer as well!

#include <stdio.h>

int main() {

  int num = 9;

  int *p = &num; // p is pointing to num

  printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);

  *p = 5;

  printf("num: %d, p: %d, &num: %d, *p: %d\n", num, p, &num, *p);

  int *p2 = &num;
  int *p3 = p;   // p3 is also pointing to num;
  int **p4 = &p; //

  *p3 = 7;

  **p4 = 3;
  // *p4 = 3; // p = &num => p = 3;

  printf("num: %d, p: %d, &num: %d, *p: %d, **p4: %d, *p4: %d\n", num, p, &num,
         *p, **p4, *p4);

  int ***ptptp = &p4;

  ***ptptp = 10;
  printf("num: %d, p: %d, &num: %d, *p: %d, **p4: %d, *p4: %d\n", num, p, &num,
         *p, **p4, *p4);

  void *p5 = &p5;
}
