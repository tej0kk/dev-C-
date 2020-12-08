#include <stdio.h>

int count = 0;
int rumus(int N){
	if(N == 0) return 1;
	else if(N == 1) return 2;
	else if(N % 5 == 0){
		if(N % 3 == 0){
			count++;
//			printf("count: %d\n", count);
		}
		return N*2;
	}
	else{
		if(N % 3 == 0){
			count++;
//			printf("count: %d\n", count);
		}
		return rumus(N-1) + N + rumus(N-2) + N-2;
	}
}

int main(){
	int cases, N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		int n = rumus(N);
		printf("%d %d\n", n, count);
		count = 0;
	}
	
	return 0;
}
