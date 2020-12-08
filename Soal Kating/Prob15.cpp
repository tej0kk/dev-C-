#include <stdio.h>

int main(){
	
	int cases, number, x1, x2;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		int plus = 0;
		scanf("%d %d %d", &number, &x1, &x2);
		printf("Case #%d:\n", i+1);
		for(int j=1; j<=number; j++){
			plus += j;
			if(plus > x1){
				printf("%d\n", plus);
				while(plus > x1){
					plus -= x2;
				}
			}
		}
	}
	
	return 0;
}
