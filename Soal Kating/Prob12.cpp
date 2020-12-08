#include <stdio.h>

int main(){
	
	int cases, number, range;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		getchar();
		printf("Case #%d: \n", i+1);
		for(int j=number; j>=1; j--){
			if(j == number || j==5 || j==10 || j==30 || j==60) printf("%d SECONDS TILL NEW YEAR!!\n", j);
			else printf("%d\n", j);
		}
	}
	
	return 0;
}
