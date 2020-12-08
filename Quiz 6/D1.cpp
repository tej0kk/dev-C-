#include <stdio.h>

int main(){
		
	int cases;
	int number;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		printf("Case #%d: ",i+1);
		for(int j=0; j<number; j++){
			printf("%c", j+'a');
		}
		printf("\n");
	}
	
	return 0;
}
