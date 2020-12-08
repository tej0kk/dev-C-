#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int left, int right){
	int pivot = arr[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(arr[i] > pivot){
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
	int cases;
	int num;
	int jarak = 0;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &num);
		int arr[num];
		for(int j=0; j<num; j++){
			scanf("%d", &arr[j]);
		}
		QuickSort(arr, 0, num-1);
//		for(int j=0; j<num; j++){
//			printf("%d ", arr[j]);
//		}
		int rmhVito = num/2;
//		printf("%d\n", rmhVito);
		for(int j=0; j<num; j++){
			if(j == rmhVito) continue;
			else{
				int temp = abs(arr[j] - arr[rmhVito]);
				jarak += temp;
//				printf("%d %d\n", temp, jarak);
			}
		}
		printf("%d\n", jarak);
		jarak = 0;
	}
	/* 1 2 3 4 5
	rmh vito di 3
	3-1 = 2
	3-2 = 1
	5-3 = 2
	4-3 = 1
	*/
	
	return 0;
}
