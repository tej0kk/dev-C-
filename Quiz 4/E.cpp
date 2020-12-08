#include <stdio.h>

int main(){
	int cases;
	int days;
	int leap;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &days);
		leap = 1;

		for(int j=5; days>0; j++){
		if((j % 4 == 0 && j % 100 != 0) || j % 400 == 0){
			days-=366;
			leap++;
//			printf("%d", j);
		}
		else{
			days-=365;
		}
	}
	printf("Case #%d: %d\n", i+1, leap );
	}
}
