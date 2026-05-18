// Create a program which calculates the weighted sum of an array.
// The weights are listed in another array. For example: first array: [1, 2, 3, 4, 5],
//  second array: [1, 1, 2, 3, 5]. Weighted sum: 1*1 + 1*2 + 2*3 + 3*4 + 5*5.



#include<stdio.h>
#include <stdio.h>

int weightSum(int arr1[], int arr2[], int size)
{
    int weightSum = 0;

    for(int i = 0; i < size; i++)
    {
        weightSum = weightSum + (arr1[i] * arr2[i]);
    }

    return weightSum;
}


int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 1, 2, 3, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("Weighted sum is: %d\n", weightSum(arr1, arr2, size));

    return 0;
}