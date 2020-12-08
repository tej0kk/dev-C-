#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Data{
	char Name[1005];
	int num = 0;
};

void swap1(struct Data *a, struct Data *b){
	struct Data temp= *a;
	*a = *b;
	*b = temp;
}
//
//void swap(int *a, int *b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}

int partition(struct Data data[], int left, int right){
//	char pivot1[105];
	int random = rand()%(right-left)+left;
//	swap1(arr[random], arr[right]);
//	strcpy(pivot1, arr[right]);
	swap1(&data[random], &data[right]);
	int pivot = data[right].num;
	int split = left;
	
	for(int i=left; i<right; i++){
		if(data[i].num > pivot){
//			split++;
			swap1(&data[i], &data[split]);
			split++;
//			swap1(data[i], datas[split]);
		}
		else if(data[i].num == pivot){
			if(strcmp(data[i].Name, data[right].Name) < 0){
//				split++;
				swap1(&data[i], &data[split]);
				split++;
			}
		}
	}
	swap1(&data[split], &data[right]);
//	swap1(arr[split+1], arr[right]);
	return split;
}

void quickSort(struct Data data[], int left, int right){
	if(left < right){
		int split = partition(data, left, right);
		quickSort(data, left, split-1);
		quickSort(data, split+1, right);
	}
}

int main(){
	srand(time(NULL));
	int cases;
	int numString, num;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%d %d", &numString, &num); getchar();
		struct Data data[1005];
		int arr;
		for(int j=0; j<numString; j++){
			data[j].num = 0;
		}
		for(int j=0; j<numString; j++){
			scanf("%s", data[j].Name); getchar();
			for(int k=0; k<num; k++){
				scanf("%d", &arr); getchar();
				data[j].num += arr;
			}
		}
		quickSort(data, 0, numString-1);
		printf("Competition #%d:\n", i+1);
		for(int l=0; l<numString; l++){
			printf("%d. %s\n", l+1, data[l].Name);
		}
		printf("\n");
	}
	
	return 0;
}
