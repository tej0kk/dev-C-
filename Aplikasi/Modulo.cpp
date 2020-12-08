#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		int number, modulo;
		scanf("%d %d", &number, &modulo);
		number %= modulo;
		printf("%d: %d\n", i+1, number);
	}
	
	return 0;
}
