#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void swap(int* a, int* b){
	int c = *a;
	*a = *b;
	*b = c;
}

void swapQuick(int* a, int* b){
	int c = *a;
	*a = *b;
	*b = c;
}

int partition(int* data, int left, int right){
	int random = rand()%(right-left)+left;
//	printf("%d\n", random);
	swap(&data[random], &data[right]);
	int pivot = data[right];
	int split = left-1;
	
	for(int i=left; i<=right-1; i++){
		if(data[i] <= pivot){
			split++;
			swap(&data[i], &data[split]);
		}
	}
	swap(&data[split+1], &data[right]);
	return split+1;
}

void quickSort(int* data, int left, int right){
	if(left < right){
		int split = partition(data, left, right); //2
		quickSort(data, left, split-1); //0-1
		quickSort(data, split+1, right); //3-6
	}
}

int main(){
	srand(time(NULL));
	int data[] = {5, 2, 1, 4, 7, 6, 3};
	int size = sizeof(data) / sizeof(data[0]);
//	printf("%d", size);
	quickSort(data, 0, size-1);
	
	int n = 7;
	char names[][100] = {
		"Budi","Ceni","AAni", "Deni", "Gani", "Fani", "Lani"
	};
	//ASC //DSC tinggal ubh tandanya
	//looping per step untuk mendapatkan angka terkecil pertama, kedua,...
	for(int i=0; i<n; i++){
		for(int j=n-1; j>i; j--){
			//ASC
			if(strcmp(names[j], names[j-1]) < 0){
				char temp[100];
				strcpy(temp, names[j]);
				strcpy(names[j], names[j-1]);
				strcpy(names[j-1], temp);	
			}
//			if(data[j] < data[j-1])
//			swap(&data[j], &data[j-1]);
		}
	}
	for(int i=0; i<size; i++){
		printf("%d ", data[i]);
	}
	for(int i=0; i<n; i++){
//		printf("%s ", names[i]);
//		printf("%d ", data[i]);

	}
	
	return 0;
}
