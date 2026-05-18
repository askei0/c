//Create a program which swaps the smallest and greatest elements of an array.
#include<stdio.h>

int greatestElem(int arr[], int size){

	int max = arr[0];
	int maxIndex = 0;

	for (int i = 1; i < size; ++i){
		if(max < arr[i]){
			max = arr[i];
			maxIndex = i;
		}
	}
		return maxIndex;

}

int lowestElemIndex(int arr[], int size){

	int max = arr[0];
	int minIndex = 0;

	for (int i = 1; i < size; ++i){
		if(max < arr[i]){
			max = arr[i];
			maxIndex = i;
		}
	}
		return minIndex;

}
int main(){
	int arr[5] = {3,4,1,0,2};
	int size = sizeof(arr) / sizeof(arr[0]);


	printf("Before swapping: ");
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}

	//Swapping logic
	int minIndex = lowestElemIndex(arr, size);
	int maxIndex = greatestElem(arr,size);

	int tempMax = arr[maxIndex];
	arr[maxIndex] = arr[minIndex];
	arr[minIndex] = tempMax;

	printf("after swapping: ");
	for (int i = 0; i < size; i++){
	printf("%d ", arr[i]);
	}


}
