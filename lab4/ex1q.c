// Create a program which fills up an array with zeros.
#include <stdio.h>

int main() {
  int arr[10];
  int n = 10;

  for (int i = 0; i < 10; ++i) {
    arr[i] = 0;
  }

  // Control
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
  return 0;
}
