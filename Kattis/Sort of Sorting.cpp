#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void swap(char a[], char b[]){
	char temp[25];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

int partition(char arr[][25], int left, int right){
//	int random = rand()%(right-left) + left;
//	swap(arr[random], arr[right]);
	char pivot[25];
	strcpy(pivot, arr[right]);
	int split = left-1;
	
	for(int i=left; i<right; i++){
//		printf("strncmp: %d\n", strncmp(arr[i], pivot, 2));
		if(strncmp(arr[i], pivot, 2)  < 0 || strncmp(arr[i], pivot, 2) == 0){
			split++;
//			printf("Tuker: %s %s\n", arr[i], pivot);
			swap(arr[i], arr[split]);
//			printf("After: %s %s\n", arr[i], arr[split]);
		}
	}
	swap(arr[split+1], arr[right]);
	return split+1;
}

void QuickSort(char arr[][25], int left, int right){
	if(left < right){
		int split = partition(arr, left, right);
		QuickSort(arr, left, split-1);
		QuickSort(arr, split+1, right);
	}
}

int main(){
	srand(time(NULL));
	int num;
	while(1){
		scanf("%d", &num); getchar();
		if(num == 0) return 0;
		char arr[num][25];
		for(int i=0; i<num; i++){
			int x = scanf("%s", arr[i]); 
			getchar();
		}
		QuickSort(arr, 0, num-1);
		for(int j=0; j<num; j++){
			printf("%s\n", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
