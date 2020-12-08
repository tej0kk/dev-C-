#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int left, int right){
	int random = rand()%(right-left)+left;
	swap(&arr[random], &arr[right]);
	int pivot = arr[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(arr[i] <= pivot){
			split++;
			swap(&arr[i], &arr[split]);
		}
	}
	swap(&arr[split+1], &arr[right]);
	return split+1;
}

void quickSort(int *arr, int left, int right){
	//akan dijalankan jika left lebih kecil dari right
	if(left < right){
		int split = partition(arr, left, right);
		quickSort(arr, left, split-1); //buat yg kiri
		quickSort(arr, split+1, right);
	}
}

int main(){
	srand(time(NULL));
	int cases;
	scanf("%d", &cases);
	int num;
	for(int i=0; i<cases; i++){
		scanf("%d", &num);
		int arr[num];
		for(int j=0; j<num; j++){
			scanf("%d", &arr[j]);
		}
		quickSort(arr, 0, num-1);
		
		for(int k=0; k<num; k++){
			printf("%d ", arr[k]);
		}
	}
	
	return 0;
}
