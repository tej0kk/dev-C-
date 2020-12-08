#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int left, int right){
//	int random = rand()%(right-left)+left;
//	swap(&arr[random], &arr[right]);
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
	if(left < right){
		int split = partition(arr, left, right);
		quickSort(arr, left, split-1);
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
		double total = 0;
		for(int k=0; k<num; k++){
			total += arr[k];
		}
		double mean = total / (double)num;
		double median;
		if(num % 2 == 0){
			int temp2 = num/2;
			int temp1 = arr[temp2];
			double temp3 = arr[temp2-1] + temp1;
			median = temp3 / 2;
		}
		else if(num % 2 != 0) median = arr[num/2];
		
	
		printf("Case #%d:\n", i+1);
		printf("Mean : %.2lf\n", mean);
		printf("Median : %.2lf\n", median);
	}
	
	return 0;
}
