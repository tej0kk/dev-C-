#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	int tambah = 0;
	for(int i = 1; i<=size; i++){
		for(int j = size; j<=1; j--){
			if(i == size ) printf("F");
			
			else printf("#");
		}
		tambah++;
		printf("\n");
	}
	
	return 0;
}
