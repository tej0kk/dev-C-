#include <stdio.h>
#include <string.h>

struct Word{
	char arr1[51];
	char arr2[51];
};

int main(){
	int cases;
	scanf("%d", &cases); getchar();
	struct Word data[cases];	
	for(int i=0; i<cases; i++){
		scanf("%s %s", data[i].arr1, data[i].arr2); getchar();
		printf("%s\n%s\n", data[i].arr1, data[i].arr2);
		int length = strlen(data[i].arr1);
		for(int j=0; j<length; j++){
			if(data[i].arr1[j] == data[i].arr2[j])printf(".");
			else printf("*");
		}
//		if(i==cases-1) continue;
		printf("\n\n");
	}
	
	return 0;
}
