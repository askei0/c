// 11 - Determine the average of two integers.

#include <stdio.h>

int main() {

  int ilk;
  int iki;
  printf("Ilk sayiyi girer misin >_< ");
  scanf("%d", &ilk);
  printf("Ikinci sayiyi girer misin >_< ");
  scanf("%d", &iki);

  float avg = (ilk + iki) / 2.0;

  printf("Iki sayinin ortalamasi: %.2f >_< ", avg);
}
