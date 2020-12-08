#include <stdio.h>
#include <string.h>
void swap(char a[], char b[]);
void swap1(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition1(char name[][55], int *age, int left, int right){
	int pivot = age[right];
//	printf("pivot: %s\n", pivot);
	char pivot1[55];
	strcpy(pivot1, name[right]);
	int split = left-1;
	for(int i=left; i<right; i++){
		if(age[i] < pivot){
			split++;
			swap(name[i], name[split]);
			swap1(&age[i], &age[split]);
		}
		else if(age[i] == pivot){
			if(strcmp(name[i], pivot1) == -1){
				split++;
				swap(name[i], name[split]);
			}
		}
	}
	swap(name[split+1], name[right]);
	swap1(&age[split+1], &age[right]);
	return split+1;
}

void quickSort1(char name[][55], int *age, int left, int right){
	if(left < right){
		int split = partition1(name, age, left, right);
		quickSort1(name, age, left, split-1);
		quickSort1(name, age, split+1, right);
	}
}

void swap(char a[], char b[]){
	char temp[55];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

//int partition(char name[][55], int *age, int left, int right){
//	char pivot[55];
//	strcpy(pivot, name[right]);
////	printf("pivot: %s\n", pivot);
//	int split = left-1;
//	for(int i=left; i<right; i++){
//		if(strcmp(name[i], pivot) == -1){
//			split++;
//			swap(name[i], name[split]);
//			swap1(&age[i], &age[split]);
//		}
//	}
//	swap(name[split+1], name[right]);
//	swap1(&age[split+1], &age[right]);
//	return split+1;
//}
//
//void quickSort(char name[][55], int *age, int left, int right){
//	if(left < right){
//		int split = partition(name, age, left, right);
//		quickSort(name, age, left, split-1);
//		quickSort(name, age, split+1, right);
//	}
//}


int main(){
	
	int cases; int num;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &num); getchar();
		char name[num][55];
		int age[num];
		printf("num: %d\n", num);
		for(int j=0; j<num; j++){
			scanf("%[^#]#%d", &name[j], &age[j]); getchar();
		}
//		for(int j=0; j<num; j++){
//			printf("%s %d\n", name[j], age[j]);
//		}
//		quickSort(name, age, 0, num-1);
		quickSort1(name, age, 0, num-1);
		for(int j=0; j<num; j++){
			printf("%s - %d\n", name[j], age[j]);
		}
	}
	
	
	return 0;
}
