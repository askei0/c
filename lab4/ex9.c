// Create a program which swaps the smallest and greatest elements of an array.

#include <stdio.h>

int greatestElemIndex(int arr[], int size) {

  int max = arr[0];
  int maxIndex = 0;

  for (int i = 1; i < size; ++i) {
    if (max < arr[i]) {
      max = arr[i];
      maxIndex = i;
    }
  }

  return maxIndex;
}

int lowestElemIndex(int arr[], int size) {

  int min = arr[0];
  int minIndex = 0;

  for (int i = 1; i < size; ++i) {
    if (min > arr[i]) {
      min = arr[i];
      minIndex = i;
    }
  }
  return minIndex;
}

int main() {

  int arr[5] = {3, 4, 1, 0, 2};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Before Swapping: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Swapping Logic
  int minIndex = lowestElemIndex(arr, size);
  int maxIndex = greatestElemIndex(arr, size);

  int tempMax = arr[maxIndex];
  arr[maxIndex] = arr[minIndex];
  arr[minIndex] = tempMax;

  printf("After Swapping: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
