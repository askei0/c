#include <stdio.h>

int greatElem(int arr[], int size) {
  int maxval = arr[0];
  for (int i = 0; i < size; ++i) {
    if (arr[i] > maxval) {
      maxval = arr[i];
    }
  }
  return maxval;
}

int main() {
  int arr[5] = {3, 4, 1, 0, 2};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%d", greatElem(arr, size));
}
