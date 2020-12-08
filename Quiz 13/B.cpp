#include <stdio.h>

void swap1(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *nilai, int left, int right){
	int pivot = nilai[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(nilai[i] < pivot){
			split++;
			swap1(&nilai[i], &nilai[split]);
		}
	}
	swap1(&nilai[split+1], &nilai[right]);
	return split+1;
}

void quickSort(int *nilai, int left, int right){
	if(left < right){
		int split = partition(nilai, left, right);
		quickSort(nilai, left, split-1);
		quickSort(nilai, split+1, right);
	}
}

int main(){
	int cases;
	int index;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &index);
		int arr[index];
		for(int j=0; j<index; j++){
			scanf("%d", &arr[j]);
		}
		quickSort(arr, 0, index-1);
		int key;
		scanf("%d", &key);
		for(int j=0; j<index; j++){
			if(key == arr[j] && j != index-1){
				printf("CASE #%d: %d %d\n",i+1, arr[j], arr[j+1]);
				break;
			}
			if(key == arr[j] && j == index-1){
				printf("CASE #%d: %d %d\n",i+1, arr[j-1], arr[j]);
				break;
			}
			if(key != arr[j] && j == index-1){
				 printf("CASE #%d: -1 -1\n", i+1);
				 break;
			}
		}
	}
	return 0;
}
