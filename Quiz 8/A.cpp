#include <stdio.h>

int main(){
	
	int cases; int row, col; int rowMin, colMin;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &row, &col);
		int matriks[row][col];
		for(int j=0; j<row; j++){
			for(int k=0; k<col; k++){
				scanf("%d", &matriks[j][k]);
			}
		}
		scanf("%d %d", &rowMin, &colMin);
		for(int j=0; j<col; j++){
			if(matriks[rowMin-1][j] > 0) matriks[rowMin-1][j] *= -1;
		}
		for(int k=0; k<row; k++){
			if(matriks[k][colMin-1] > 0) matriks[k][colMin-1] *= -1;
		}
		printf("Case #%d:\n", i+1);
		for(int j=0; j<row; j++){
			for(int k=0; k<col; k++){
				printf("%d", matriks[j][k]);
				if(k != col-1) printf(" ");
			}
			printf("\n");
		}
	}
	
	return 0;
}
