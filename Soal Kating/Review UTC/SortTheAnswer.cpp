#include <stdio.h>

int main(){
	
	int cases, range, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &range);getchar();
		char word[range+1]; 
		for(int j=0; j<range; j++){
			scanf("%d.", &number);getchar();
			scanf(" %c", &word[number]); getchar();
//			printf("%c ",word[number]) ;
		}printf("Case #%d:\n", i+1);
		for(int k=1; k<=range; k++){
			printf("%d. %c\n", k, word[k]);
		}	
	}
	
	return 0;
}
