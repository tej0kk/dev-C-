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
	int num;
	int split;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &num);
		int arr[num];
		for(int j=0; j<num; j++){
			scanf("%d", &arr[j]);
		}
//		for(int j=0; j<num; j++){
//			printf("%d", arr[j]);
//		}
		scanf("%d", &split);
		int count = 0;
		quickSort(arr, 0, num-1);
		for(int j=0; j<num; j++){
			count++;
			if(arr[j] == split){
				count -= 1;
				break;
			}
		}
		int temp = num-count-1;
//		printf("%d %d\n", count, temp);
		if(count % 2 != 0) printf("Case #%d: %d\n", i+1, arr[count/2]);
		else if(temp % 2 != 0) printf("Case #%d: %d\n", i+1, arr[num-(temp/2)-1]);
		
	}
	
	return 0;
}
