#include <stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int left, int right){
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

void quickSort(int *arr, int left, int right){
	if(left < right){
		int split = partition(arr, left, right);
		quickSort(arr, left, split-1);
		quickSort(arr, split+1, right);
	}
}

int main(){
	
	int cases;
	scanf("%d", &cases);
	int Num;
	for(int i=0; i<cases; i++){
		scanf("%d", &Num);
		int arr[Num];
		for(int j=0; j<Num; j++){
			scanf("%d", &arr[j]);
		}
		quickSort(arr, 0, Num-1);
		int min = arr[1] - arr[0];
		for(int j=1; j<Num-1; j++){
			int temp = arr[j+1] - arr[j];
			min = (min < temp) ? min : temp;
		}
		printf("%d\n", min);
	}
	
	return 0;
}
