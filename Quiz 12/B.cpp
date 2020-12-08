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

void swap1(double* a, double* b){
	double temp = *a;
	*a = *b;
	*b = temp;
}

int partition1(double *arr, int left, int right){
	double pivot = arr[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(arr[i] < pivot){
			split++;
			swap1(&arr[i], &arr[split]);
		}
	}
	swap1(&arr[split+1], &arr[right]);
	return split+1;
}

void quickSort1(double *arr, int left, int right){
	if(left < right){
		int split = partition1(arr, left, right);
		quickSort1(arr, left, split-1);
		quickSort1(arr, split+1, right);
	}
}

int main(){
	
	int cases;
	scanf("%d", &cases);
	int num;
	for(int i=0; i<cases; i++){
		scanf("%d", &num);
		double median[num] = {0};
		int indexArr;
		for(int j=0; j<num; j++){
			scanf("%d", &indexArr);
			int arr[indexArr];
			for(int k=0; k<indexArr; k++){
				scanf("%d", &arr[k]);
			}
			quickSort(arr, 0, indexArr-1);
//			for(int k=0; k<indexArr; k++){
//				printf("%d ", arr[k]);
//			}
//			printf("\n");
			if(indexArr % 2 != 0){
				int temp = indexArr/2;
//				printf("%d\n", temp);
				median[j] = arr[temp];
//				printf("%d\n", median[j]);
			}
			else{
				int temp = indexArr/2;
//				printf("%d\n", temp);
				median[j] = (arr[temp-1] + arr[temp])/2;
//				printf("%d\n", median[j]);
			}
//			printf("%.2lf\n", median[j]);
		}
		double hasil = 0;
		quickSort1(median, 0, num-1);
//		for(int k=0; k<num; k++){
//			printf("%.2lf ", median[k]);
//		}
//		printf("\n");
		if(num % 2 != 0){
			int temp = num/2;
//			printf("%d\n", temp);
			hasil = median[temp];
//			printf("%d\n", median[j]);
		}
		else{
			int temp = num/2;
//			printf("%d\n", temp);
			hasil = (median[temp-1] + median[temp])/2;
//			printf("%d\n", median[j]);
		}
		printf("Case #%d: %d.00\n", i+1, (int)hasil);
	}
	
	return 0;
}
