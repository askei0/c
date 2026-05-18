// Redesign the previous function so that we get the array using
//  a pointer to the first element and a pointer to the last element.
//   What happens if we overindex by one? What happens if we overindex by more?

#include <stdio.h>

int arrSum(int *first, int *last) {
  // int size = (last - first) + 1;
  // printf("size: %d\n", size);

  int sum = 0;

  while (first <= last) {
    sum += *first;
    first++;
    // What happens if we overindex by one? It is safe.
    // What happens if we overindex by more? It is undefined
  }

  return sum;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  // Let's dereference a null pointer. What is the result? Seg Fault

  int *p = NULL;
  printf("%d\n", *p);

  int size = sizeof(arr) / sizeof(arr[0]);

  // printf("%ld\n", &arr[2] - arr);

  printf("Sum of arr = %d\n", arrSum(arr, &arr[size - 1]));
}
