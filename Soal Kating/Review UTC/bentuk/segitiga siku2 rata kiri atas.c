#include <stdio.h>

int main(){

	int size;
	scanf("%d", &size);
	for(int i=1; i<=size; i++){
		for(int a=1; a<i; a++){
			printf(" ");
		}
		for(int j=i; j<=size; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
