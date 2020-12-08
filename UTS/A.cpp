#include <stdio.h>

int main(){
	
	int pattern, size;
	char kar;
	scanf("%d", &pattern);
	for(int i=0; i<pattern; i++){
		scanf("%d %c", &size, &kar);
		printf("Pattern #%d:\n",i+1);
		for(int j=0; j<size; j++){
			for(int k=0; k<size; k++){
				if(j==0 || j == size-1 || j == k || k == 0 || k == size-1 || k == size-j-1){
					printf("%c", kar);
				}
				else printf(" ");
			}
			printf("\n");
		}
	}
	
	return 0;
}
