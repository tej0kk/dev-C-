#include <stdio.h>
#include <string.h>

void swap1(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char a[], char b[]){
	char temp[20];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

int partition(char name[][20], int *nilai, int left, int right){
	int pivot = nilai[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(nilai[i] > pivot){
			split++;
			swap1(&nilai[i], &nilai[split]);
			swap(name[i], name[split]);
		}
	}
	swap1(&nilai[split+1], &nilai[right]);
	swap(name[split+1], name[right]);
	return split+1;
}

void quickSort(char name[][20], int *nilai, int left, int right){
	if(left < right){
		int split = partition(name, nilai, left, right);
		quickSort(name, nilai, left, split-1);
		quickSort(name, nilai, split+1, right);
	}
}

int main(){
	int cases, N;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &N); getchar();
		int nilai[N];
		char name[N][20];
		for(int j=0; j<N; j++){
			scanf("%[^#]#%d", name[j], &nilai[j]); getchar();
		}
		quickSort(name, nilai, 0, N-1);
		char key[20];
		scanf("%s", key); getchar();
//		printf("Case #%d: ", i+1);
		for(int j=0; j<N; j++){
			if(strcmp(key, name[j]) == 0){
				 printf("Case #%d: %d\n", i+1, j+1);
				 break;
			}
		}
	}
	return 0;
}
