#include <stdio.h>

long long int dictionary[45] = {0};
long long int fibo(int N){
	if(dictionary[N] != 0) return dictionary[N];
	else{
		dictionary[N] = fibo(N-2) + fibo(N-1) + 1;
		return dictionary[N];
	}
}

int main(){
	dictionary[0] = 2;
	dictionary[1] = 1;
	int cases, N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d: %lld\n", i+1, fibo(N));
	}
}
