#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	int space = 0;
	for(int i=1; i<=size; i++){
//		int k = size;
		for(int a=i; a<size-1; a++){
			printf(" ");
		}
		for(int j=size; j<=i; j--){
//			if(i == 1 || i == size ||  j == 1 || j == size) printf("*");
//			else if(i == size/2+1 || j == size/2+1 ) printf("#");
//			else if(i == j || j == k-i) printf("$");
//			else printf(" ");
			printf("*");
		}
//		k--;
		printf("\n");
	}
	
	return 0;
}
