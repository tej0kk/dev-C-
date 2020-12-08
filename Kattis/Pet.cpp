#include <stdio.h>

int main(){
	
	int count = 0;
	int max = 0;
	int index = 0;
	int matriks[5][4];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			scanf("%d", &matriks[i][j]); getchar();
		}
	}
	
	
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			count += matriks[i][j];
//			printf("Baris = %d\nKolom = %d\nCount=%d\n", i, j, count);
		}
		if(count > max){
			max = count;
			index = i+1;
		}
		count = 0;	
//		printf("%d %d\n", index, max);
	}
	printf("%d %d\n", index, max);
	return 0;
}
