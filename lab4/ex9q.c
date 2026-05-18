// Create a program which swaps the smallest and greatest elements of an array.

#include <stdio.h>

int min(int arr[], int size) {
  int minval = arr[0];
  int minind = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] < minval) {
      minval = arr[i];
      minind = i;
    }
  }
  return minind;
}

int max(int arr[], int size) {
  int maxval = arr[0];
  int maxind = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] > maxval) {
      maxval = arr[i];
      maxind = i;
    }
  }
  return maxind;
}

int main() {
  int arr[5] = {3, 4, 1, 0, 2};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Before changing\n");

  for (int i = 0; i < size; ++i) {
    printf("%d, ", arr[i]);
  }

  printf("\nAfter changing\n");
  int maxind = max(arr, size);
  int minind = min(arr, size);

  int tempmax = arr[maxind];
  arr[maxind] = arr[minind];
  arr[minind] = tempmax;

  for (int i = 0; i < size; ++i) {
    printf("%d, ", arr[i]);
  }

  printf("\n");
}
