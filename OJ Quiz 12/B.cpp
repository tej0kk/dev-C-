#include <stdio.h>
#include <string.h>
struct Data{
	char id[105];
	char name[55];
	char key[55];
};

int main(){
	struct Data data1[105];
	int cases;
	FILE *f = fopen("testdata.in", "r");
//	int index = 0;
	int key1;
	while(!feof(f)){
		fscanf(f, "%d\n", &cases);
		for(int i=0; i<cases; i++){
			fscanf(f, "%[^#]#%[^\n]\n", data1[i].id, data1[i].name);
		}
//		for(int i=0; i<cases; i++){
//			printf("%s %s\n", data1[i].id, data1[i].name);
//		}
//		index++;
//		int indexKey = 0;
		fscanf(f, "%d\n", &key1);
		char key[105];
		for(int j=0; j<key1; j++){
				char *temp;
				fscanf(f, "%[^\n]\n", key);
				printf("Case #%d:\n", j+1);
				temp = strtok(key, " ");
				int count = 0;
				while(temp != NULL){
//					printf("%s ", temp);
					bool ada = false;
					for(int i=0; i<cases; i++){
//						printf("%d", strcmp(temp, data1[i].id));
						if(strcmp(temp, data1[i].id) == 0){
							if(count == 0){
								printf("%s", data1[i].name);
								ada = true;
								break;
							}
							else{
								printf(" %s", data1[i].name);
								ada = true;
								break;
							}
						}
					}
					if(!ada && count == 0) printf("%s", temp);
					else if(!ada && count != 0) printf(" %s", temp);
//					printf("\n");
					count++;
					temp = strtok(NULL, " ");
				}	
				printf("\n");
			}
		}
	fclose(f);
	
	return 0;
}
