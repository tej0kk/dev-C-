#include <stdio.h>
#include <string.h>

void swap(char a[], char b[]){
	char temp[55];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void swap1(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, char word[][45], int left, int right){
	char pivot[45];
	strcpy(pivot, word[right]);
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(strcmp(word[i], pivot) == -1){
			split++;
			swap(word[i], word[split]);
			swap1(&arr[i], &arr[split]);
		}
	}
	swap(word[split+1], word[right]);
	swap1(&arr[split+1], &arr[right]);
	return split+1;
}

void quickSort(int *arr, char word[][45], int left, int right){
	if(left < right){
		int split = partition(arr, word, left, right);
		quickSort(arr, word, left, split-1);
		quickSort(arr, word, split+1, right);
	}
}

int main(){
	
	int N;
	scanf("%d", &N); getchar();
	int num[N];
	char plant[N][45];
	for(int i=0; i<N; i++){
		scanf("%d#%[^\n]", &num[i], plant[i]);
	}
	quickSort(num, plant, 0, N-1);
	for(int i=0; i<N; i++){
		printf("%d %s\n", num[i], plant[i]);
	}
	return 0;
}
