#include <stdio.h>
#include <string.h>

void word(int N){
	if(N == 1){
		printf("A");
	}
	else{
		//sebeum
		word(N-1);
		//tengah
		printf("%c", N + 'A'-1);
		//sebelum
		word(N-1);
	}
}

int main(){
	
	int cases;
	int N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		word(N);
		printf("\n");
	}
	
	return 0;
}
