#include <stdio.h>

int arrMin(int arr[], int size) {
  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}
int main() {
  int arr[8] = {3, 1, 4, 1, 5, 9, 2, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("min arr: %d\n", arrMin(arr, size));
}
