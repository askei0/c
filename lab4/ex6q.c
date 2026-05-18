// Calculate the average of some floating point numbers in an array.

#include <stdio.h>

float average(int size, float arr[]) {
  float sum = 0;

  for (int i = 0; i < size; ++i) {

    sum += arr[i];
  }
  return sum / size;
}

int main() {
  float arr[5] = {48.2, 984.1, 0.0002, 2, -24.1};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("%.2f", average(size, arr));
}
