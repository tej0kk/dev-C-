#include <stdio.h>

int main(){
	
	int A[3][3];
	int B[3] [3] ;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
