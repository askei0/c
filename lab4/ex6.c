// Calculate the average of some floating point numbers in an array.

#include <stdio.h>

float average(float arr[], int size) {

  float sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  return sum / size;
}

int main() {

  float arr[3];

  for (int i = 0; i < 3; i++) {
    scanf("%f", &arr[i]);
  }

  printf("Average of the arr: %.2f\n", average(arr, 3));
}
