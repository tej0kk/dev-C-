#include <stdio.h>

int main(){
	int cases, size;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &size);
		for(int j=0; j<size; j++){
			for(int k=0; k<size; k++){
				if(j==0 || j == size-1 || k == 0 || k==j || k == size-1 || k == size-1-j ) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	
	return 0;	
}
