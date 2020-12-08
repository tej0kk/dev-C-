#include <stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *dragon, int *bonus, int left, int right){
	int pivot = dragon[right];
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(dragon[i] < pivot){
			split++;
			swap(&dragon[i], &dragon[split]);
			swap(&bonus[i], &bonus[split]);
		}
	}
	swap(&dragon[split+1], &dragon[right]);
	swap(&bonus[split+1], &bonus[right]);
	return split+1;
}

void quickSort(int *dragon, int *bonus, int left, int right){
	if(left < right){
		int split = partition(dragon, bonus, left, right);
		quickSort(dragon, bonus, left, split-1);
		quickSort(dragon, bonus, split+1, right);
	}
}

int main(){
	
	int SKirito, num;
	scanf("%d %d", &SKirito, &num);
	int dragon[num], bonus[num];
	for(int i=0; i<num; i++){
		scanf("%d %d", &dragon[i], &bonus[i]);
	}
	quickSort(dragon, bonus, 0, num-1);
//	for(int i=0; i<num; i++){
//		printf("%d %d\n", dragon[i], bonus[i]);
//	}
	bool  temp = true;
	for(int i=0; i<num; i++){
		if(SKirito > dragon[i]){
			SKirito += bonus[i];
		}
		else temp = false;
	}
	if(temp == true) printf("YES\n");
	else printf("NO\n");
	return 0;
}
