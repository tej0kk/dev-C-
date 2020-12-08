#include <stdio.h>

int main(){
	
	int cases;
	
	int N;
	
	scanf("%d", &cases); getchar();
	int maxRow[100] = {0};
	
	int maxCol = 0;
	for(int i=0; i<cases; i++){
		scanf("%d", &N); getchar();
		int row[N];
		printf("Case #%d:\n", i+1);
		int matriks[N][N];
		
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				scanf("%d", &matriks[j][k]); getchar();
			}
		}
		printf("Row : ");
		for(int j=0; j<N; j++){
			int maxrow=matriks[j][0];
			for(int k=0; k<N; k++){
				if(maxrow < matriks[j][k]){
					maxrow = matriks[j][k];
				}
			}
			printf(" %d", maxrow);
		}
		printf("\nCol : ");
		for(int j=0; j<N; j++){
			int maxcol=matriks[0][j];
			for(int k=0; k<N; k++){
				if(maxcol < matriks[k][j]){
					maxcol = matriks[k][j];
				}
			}
			printf(" %d", maxcol);
		}
		printf("\n");
	}
//	printf("%d %d\n", cases, N);
	return 0;
}
