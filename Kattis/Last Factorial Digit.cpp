#include <stdio.h>

int main(){
	
	int cases, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		int hasil = 1;
		for(int j=number; j>=1; j--){
			hasil *= j;
		}
		hasil %= 10;
		printf("%d\n", hasil);
	}
	
	return 0;
}
