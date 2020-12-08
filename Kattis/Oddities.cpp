#include <stdio.h>

int main(){
	
	int cases, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		if(number % 2 == 0) printf("%d is even\n", number);
		else printf("%d is odd\n", number);
	}
	
	return 0;
}
