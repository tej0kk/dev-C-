#include <stdio.h>

int main(){
	
	int number;
	scanf("%d", &number);
	int total = 0;
	for(int i=0; i<=number; i++){
		total += i;
	}
	printf("%d\n", total);
	return 0;
}
