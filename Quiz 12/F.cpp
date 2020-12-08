#include <stdio.h>
#include <string.h>

struct Data{
	char clas[1005];
	char id[1005];
};

void swap1(struct Data *a, struct Data *b){
	struct Data temp= *a;
	*a = *b;
	*b = temp;
}

int partition(struct Data data[], int left, int right){
	char pivot[10005];
	strcpy(pivot, data[right].clas);
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(strcmp(data[i].clas, pivot) < 0){
			split++;
			swap1(&data[i], &data[split]);
		}
		else if(strcmp(data[i].clas, pivot) == 0){
			if(strcmp(data[i].id, data[right].id) < 0){
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

int main(){
	struct Data data[10005];
	FILE *f = fopen("testdata.in", "r");
	int index = 0;
	while(!feof(f)){
		fscanf(f, "%[^-]-%[^\n]\n", data[index].clas, data[index].id);
		index++;
	}
	quickSort(data, 0, index-1);
//	for(int i=0; i<index; i++){
//		printf("%s-%s\n", data[i].clas, data[i].id);
//	}
	
	for(int i=0; i<index; i++){
		if(i == 0){
			printf("%s:\n", data[i].clas);
		}
		else if(strcmp(data[i].clas, data[i-1].clas) != 0){
			printf("\n%s:\n", data[i].clas);
		}
		if(strcmp(data[i].clas, data[i-1].clas) == 0 && strcmp(data[i].id, data[i-1].id) == 0){
			continue;
		}
		else printf("%s\n", data[i].id);
 	}
 	printf("\n");
 	
	fclose(f);
	return 0;
}
