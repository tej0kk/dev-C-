#include <stdio.h>

int main(){
	
	int cases, row, col;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &row, &col);
		for(int j=0; j<row; j++){
			for(int k=0; k<col; k++){
				if(j == 0 || j == row-1 || k == 0 || k == col-1) printf("#");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
