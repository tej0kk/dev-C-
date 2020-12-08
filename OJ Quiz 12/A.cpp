#include <stdio.h>

struct Data{
	int id;
	char name[25];
	int key;
};

//int binary_search(struct Data data[], int left, int right, struct Data data[]){
//	int mid;
//
//	if(right >= left){
//		mid = ((right-left) / 2) + left;
//		if(data[mid] == key) return mid;
//		else if(data[mid] < key) return binary_search(data, mid+1, right, key);
//		else if(data[mid] > key) return binary_search(data, left, mid-1, key);
//	}
//	return -1;
//}

int main(){
	struct Data data[105];
	int cases;
	FILE *f = fopen("testdata.in", "r");
	int index = 0;
	int key1;
	while(!feof(f)){
		fscanf(f, "%d\n", &cases);
		for(int i=0; i<cases; i++){
			fscanf(f, "%d %[^\n]\n",& data[i].id, data[i].name);
		}
		index++;
		int indexKey = 0;
		fscanf(f, "%d\n", &key1);
		for(int j=0; j<key1; j++){
			fscanf(f, "%d\n", &data[j].key);
			for(int i=0; i<cases; i++){
//				int found = binary_search(data[i].id, 0, cases-1, data[j].key);
//				if(found != 1) printf("Case #%d: %s\n", j+1, data[found].name);
//				else printf("Case #%d: N/A\n", j+1);
				if(data[j].key == data[i].id){
					printf("Case #%d: %s\n", j+1, data[i].name);
					break;
				}
				else if(data[j].key != data[i].id && i == cases-1) printf("Case #%d: N/A\n", j+1);
			}
		}
	}
	fclose(f);
	
	return 0;
}
