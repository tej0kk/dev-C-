#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	
	for(int i=1; i<=size; i++){
		for(int j=1; j<=size-i; j++){
			printf(".");
		}
		for(int j=1; j<2*i; j++){
			printf("0");
		}
		printf("\n");
	}
	
	for(int i=1; i<size; i++){
		for(int j=1; j<=i; j++){
			printf(".");
		}
		for(int j=2*size-2*i-1; j>=1; j--){
			printf("0");
//			if(j == 0 && j%2 != 0) printf(".");
		}
		printf("\n");
	}
	
	return 0;
}
