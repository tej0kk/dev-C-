#include <stdio.h>

struct Data{
	int clas;
	int id;
};

void swap1(struct Data *a, struct Data *b){
	struct Data temp= *a;
	*a = *b;
	*b = temp;
}

int partition(struct Data data[], int left, int right){
	int pivot = data[right].clas;
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(data[i].clas < pivot){
			split++;
			swap1(&data[i], &data[split]);
		}
		else if(data[i].clas == pivot){
			if(data[i].id < data[right].id){
				split++;
				swap1(&data[i], &data[split]);
			}
		}
	}
	swap1(&data[split+1], &data[right]);
	return split+1;
}

void quickSort(struct Data data[], int left, int right){
	if(left < right){
		int split = partition(data, left, right);
		quickSort(data, left, split-1);
		quickSort(data, split+1, right);
	}
}

//void swap(struct Data *a, struct Data *b){
//	struct Data temp= *a;
//	*a = *b;
//	*b = temp;
//}
//
//int partition1(struct Data data[], int left, int right){
//	int pivot = data[right].id;
//	int split = left-1;
//	
//	for(int i=left; i<right; i++){
//		if(data[i].id < pivot){
//			split++;
//			swap(&data[i], &data[split]);
//		}
//	}
//	swap(&data[split+1], &data[right]);
//	return split+1;
//}
//
//void quickSort1(struct Data data[], int left, int right){
//	if(left < right){
//		int split = partition1(data, left, right);
//		quickSort1(data, left, split-1);
//		quickSort1(data, split+1, right);
//	}
//}

int main(){
	struct Data data[10005] = {0};
	FILE *f = fopen("inE.txt", "r");
	int index = 0;
//	int checklist[105] = {0};
	while(!feof(f)){
		fscanf(f, "%d-%d\n", &data[index].clas, &data[index].id);
//		checklist[data[index].clas]++;

		index++;
	}
//	for(int i=0; i<index; i++){
//		printf("%d %d\n", data[i].clas, data[i].id);
//	}
	quickSort(data, 0, index-1);
//	for(int j=0; j<index; j++){
//		printf("Student#%d %d\n", data[j].clas, data[j].id);
//	}
	for(int i=0; i<index; i++){
		if(i == 0){
			printf("Class#%d\n", data[i].clas);
			printf("--------\n");
		}
		else if(data[i].clas > data[i-1].clas){
			printf("\nClass#%d\n", data[i].clas);
			printf("--------\n");
		}
		printf("Student#%d\n", data[i].id);
 	}
 	printf("\n");
//		if(checklist[i] != 0){
//			printf("Class#%d\n", i);
//			printf("--------\n");
//			int temp = 0;
//			temp += checklist[i];
//			printf("temp: %d\n", temp);
//			if(checklist[i-1] == 0){
//				for(int j=0; j<temp; j++){
//					printf("Student#%d\n", data[j].id);
//				}
//			}
//			if(checklist[i-1] != 0){
//				for(int j=checklist[i-1]; j<temp; j++){
//					printf("Student#%d\n", data[j].id);
//				}
//			}
//			quickSort(data, 0, temp-1+checklist[i-1]);
//			for(int j=checklist[i-1]; j<temp+checklist[i-1]; j++){
//				printf("Student#%d\n", data[j].id);
//			}
//		}
//		
//	}
	fclose(f);
	return 0;
}
