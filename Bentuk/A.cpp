#include <stdio.h>

int main(){
	
	int size;
	int tambah = 0;
	scanf("%d", &size);
	for(int i=1; i<size; i++){
		for(int j=1; j<size*2; j++){
			if(j==size)printf("0");
			else if(j==size-tambah || j==size+tambah)printf("0");
			else(printf("."));
			
		}
		tambah++;
		printf(".\n");
	}
	for(int i=1; i<=1; i++){
		for(int j=1; j<size*2; j++){
			printf("0");
		}
		printf(".\n");
	}
	int tambah1 = size-2;
	for(int i=1; i<size; i++){
		for(int j=1; j<size*2; j++){
			if(j==size)printf("0");
			else if(j==size+tambah1 || j==size-tambah1)printf("0");
			else(printf("."));
		}
		tambah1--;
		printf(".\n");
	}
	return 0;
}
