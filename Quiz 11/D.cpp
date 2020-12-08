#include <stdio.h>

int main(){
	int N, M; int x,y; int count = 0;
	scanf("%d %d", &N, &M); getchar();
	char matriks[N][M+1];
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%c", &matriks[i][j]);
			if(matriks[i][j] == '.' || matriks[i][j] == 'E'){
				count++;
			}
		} getchar();
		
	}
	printf("%d\n", count);
	return 0;
}
