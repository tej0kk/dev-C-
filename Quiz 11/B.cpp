#include <stdio.h>
#include <string.h>
struct List{
	char nameM[45];
	char nameP[45];
}list[105];

struct Data{
	char nameS[45];
}data[105];

int main(){
	int N, cases;
	FILE *file = fopen("testdata.in", "r");
	fscanf(file, "%d\n", &N);
	for(int i=0; i<N; i++){
		fscanf(file, "%[^#]#%[^\n]\n", &list[i].nameM, &list[i].nameP);
	}
	fscanf(file, "%d\n", &cases);
	for(int j=0; j<cases; j++){
		int index = -1;
		fscanf(file, "%[^\n]\n", &data[j].nameS);
		printf("Case #%d: ", j+1);
		for(int k=0; k<N; k++){
//			printf("%s %s\n", data[j].nameS, list[k].nameM);
//			printf("strcmp: %d\n",strcmp(data[j].nameS, list[k].nameM));
			if(strcmp(data[j].nameS, list[k].nameM) == 0){
				index = k;
				break;
			}
			else continue;
		}
		if(index != -1)printf("%s\n", list[index].nameP);
		else printf("N/A\n");
		
	}

	fclose;
	return 0;
}


