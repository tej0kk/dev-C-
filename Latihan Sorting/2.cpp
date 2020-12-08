#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap(char a[], char b[]){
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
//	int temp = *a;
//	*a = *b;
//	*b = temp;
}

int partition(char arr1[][10], int left, int right){
	int random = (rand()%(right-left))+left;
//	printf("random = %d\n", random);
	swap(arr1[random], arr1[right]);
	int split = left-1;
	char pivot[100];
	strcpy(pivot, arr1[right]);
	for(int i=left; i<right; i++){
		if(strcmp(arr1[i], pivot) == -1){
			split++;
			swap(arr1[i], arr1[split]);
		}
	}
	swap(arr1[split+1], arr1[right]);
	return split+1;
}

void QuickSort(char arr1[][10], int left, int right){
	if(left < right){
		int split = partition(arr1, left, right);
		QuickSort(arr1, left, split-1);
		QuickSort(arr1, split+1, right);
	}
}

int main(){
	srand(time(NULL));
	char arr1[][10] = {{"ivanco"}, {"vincent"}, {"gratio"}, {"lee"}, {"hartono"}, {"mulyani"}, {"angel"}, {"calista"}, {"daphne"}, {"yudy"}};
	int sizeArr = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d\n", sizeArr);
//	int arr[] = {6, 19, 5, 19, 1, 88, 23, 21, 99, 23};
//	int size = sizeof(arr) / sizeof(arr[0]);
	
	QuickSort(arr1, 0, sizeArr-1);
	for(int i=0; i<sizeArr; i++){
		printf("%s\n", arr1[i]);
	}
	return 0;
}





