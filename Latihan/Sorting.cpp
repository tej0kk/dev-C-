#include <stdio.h>
#include <string.h>
int arr[10] = {5, 2, 10, 6, 3, 7, 12, 20, 1, 4};
char arr1[5][100] = {"dbc", "bbc", "bac", "aec", "abc"};
int length1 = 5;
int length = 10;

void print(){
	for(int i=0; i<length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void print1(){
	for(int i=0; i<length1; i++){
		printf("%s ", arr1[i]);
	}
	printf("\n");
}
void bubbleSort(){
	for(int i=0; i<length-1; i++){
		for(int j=0; j<length-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void selectionSort(){
	for(int i=0; i<length; i++){
		int smallestIndex = i;
		for(int j=i+1; j<length; j++){
			if(arr[j] < arr[smallestIndex]){
				smallestIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[smallestIndex];
		arr[smallestIndex] = temp;
	}
}

void insertionSort(){
	for(int i=1; i<length; i++){
		int temp = arr[i];
//		int j = i-1;
//		while(temp < arr[j] && j >= 0){
//			arr[j+1] = arr[j];
//			j-=1;
//		}
//		arr[j+1] = temp;
		int index = -1;
		for(int j=i-1; j>=0; j--){
			if(arr[j] > temp){
				arr[j+1] = arr[j];
			}
			else{
				index = j;
				break;
			}
		}
		arr[index+1] = temp;
	}
}

void insertionSort1(){
	for(int i=1; i<length1; i++){
		char temp[100];
		strcpy(temp, arr1[i]);
//		int j = i-1;
//		while(temp < arr[j] && j >= 0){
//			arr[j+1] = arr[j];
//			j-=1;
//		}
//		arr[j+1] = temp;
		int index = -1;
		for(int j=i-1; j>=0; j--){
			if(strcmp(arr1[j], temp) > 0){
				strcpy(arr1[j+1], arr1[j]);
			}
			else{
				index = j;
				break;
			}
		}
		strcpy(arr1[index+1], temp);
	}
}
// merge Sort
int arr2[] = {38, 27, 43, 3, 9, 82, 10};
int arr2Size = 7;

void printMergeSort(int left, int right){
	for(int i=left; i<=right; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
void conquer(int start, int mid, int end){
	int leftSize = mid-start+1;
	int rightSize = end-mid;
	
	int leftArr[leftSize];
	int rightArr[rightSize];
	
	for(int i=0; i<leftSize; i++){
		leftArr[i] = arr2[start+i];
//		printf("%d ", leftArr[i]);
	}
//	printf("                ");
	for(int i=0; i<rightSize; i++){
		rightArr[i] = arr2[mid+i+1];
//		printf("%d ", rightArr[i]);
	}
//	printf("\n");

	int leftIndex = 0;
	int rightIndex = 0;
	int arrIndex = start;
	
	while(leftIndex < leftSize && rightIndex < rightSize){
		if(rightArr[rightIndex] < leftArr[leftIndex]){
			arr2[arrIndex++] = rightArr[rightIndex++];
		}
		else{
			arr2[arrIndex++] = leftArr[leftIndex++];
		}
	}
	
	for(int i=leftIndex; i<leftSize; i++){
		arr2[arrIndex++] = leftArr[i];
	}
	for(int i=rightIndex; i<rightSize; i++){
		arr2[arrIndex++] = rightArr[i];
	}
	printMergeSort(start, end);
}
void divide(int start, int end){
//	printMergeSort(start, end);
	
	int mid = (start+end)/2;
	
	if(start >= end) return;
	
	divide(start, mid);
	divide(mid+1, end);
	
	conquer(start, mid, end);
}

int main(){
	
	divide(0, arr2Size-1);
	printMergeSort(0, arr2Size-1);
	
//	print1();
////	bubbleSort();
////	selectionSort();
//	insertionSort1();
//	print1();
	
	return 0;
}
