#include <stdio.h>

int main(){
	
	char chess[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			scanf("%c", &chess[i][j]);
		}
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%c", chess[i][j]); 
		}
	}
	
	return 0;
}
