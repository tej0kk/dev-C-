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
	int num; int k;
	for(int i=0; i<cases; i++){
		scanf("%d %d", &num, &k);
		int index = num-k;
		k = num < k ? index : k;
		int arr[num];
		for(int j=0; j<num; j++){
			scanf("%d", &arr[j]);
		}
		int temp = 0; int temp1 = 0;
		quickSort(arr, 0, num-1);
//		for(int j=0; j<num; j++){
//			printf("%d ", arr[j]);
//		}
		for(int i=0; i<k; i++){
			temp += arr[i];
//			printf("\n%d\n", temp);
		}
		for(int i=k; i<num; i++){
			temp1 += arr[i];
//			printf("1. %d\n", temp1);
		}
		if(temp < temp1) printf("%d\n", temp1-temp);
		if(temp > temp1) printf("%d\n", temp-temp1);
	}
	
	return 0;
}
