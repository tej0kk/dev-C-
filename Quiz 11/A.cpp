#include <stdio.h>

int main(){
	int a, b;
	FILE *file = fopen("testdata.in", "r");
//	if(!file){
//		printf("Error! Opening FIle");
//	}
	while (!feof(file)){
		fscanf(file, "%d %d", &a, &b);
	}
	printf("%d\n", a+b);
	fclose;
	return 0;
}
