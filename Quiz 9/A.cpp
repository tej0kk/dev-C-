#include <stdio.h>

int dictionary[50] = {0};
int count;

int rumus(int N){
	if(dictionary[N] != 0) return dictionary[N];
	if(N % 5 == 0){
		if(N % 3 == 0){
			count++;
		}
		dictionary[N] = N*2;
		return dictionary[N];
	}
	else{
		if(N % 3 == 0){
			count++;
		}
		dictionary[N] = rumus(N-1) + N + rumus(N-2) + N-2;
		return dictionary[N];
	}
}

int main(){
	dictionary[0] = 1;
	dictionary[1] = 2; 
	int cases, N;
//	int count;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		printf("%d %d\n", rumus(N), count);
		count = 0;
	}
	
	return 0;
}
