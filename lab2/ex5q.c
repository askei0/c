// Create a program which greets your name.
//  Store your name in a variable.
// Use the type char[] and %s formatting character.
//  Pay attention on the usage of string type: char name[32].

#include <stdio.h>

int main() {
  char isim[32];
  printf("Ismini girer misin? >_< ");
  scanf("%s", isim);
  printf("Esenlikler %s\n", isim);
}
