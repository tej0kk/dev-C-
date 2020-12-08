#include <stdio.h>


int main(){
	
	int cases;
	scanf("%d", &cases);
	int number[cases];
	int bayar = 0;
	for(int i=0; i<cases; i++){
		scanf("%d", &number[i]);
	}
	for(int i=0; i<cases; i++){
		if(number[i] < 0) bayar += number[i]*-1;
	}
	printf("%d\n", bayar);
	
	
	return 0;
}
