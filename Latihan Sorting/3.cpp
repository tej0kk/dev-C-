#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int left, int right){
	int random = (rand()%(right-left))+left;
	swap(&arr[random], &arr[right]);
	int pivot = arr[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(arr[i] < pivot){
			split++;
			swap(&arr[i], &arr[split]);
		}
	}
	swap(&arr[split+1], &arr[right]);
	return split+1;
}

void QuickSort(int *arr, int left, int right){
	if(left < right){
		int split = partition(arr, left, right);
		QuickSort(arr, left, split-1);
		QuickSort(arr, split+1, right);
	}
}

int main(){
	srand(time(NULL));
	int arr[] = {6, 19, 5, 19, 1, 88, 23, 21, 99, 23};
	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", size);
	QuickSort(arr, 0, size-1);
	for(int i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
