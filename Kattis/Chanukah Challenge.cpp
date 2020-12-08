#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	int N, K;
	int total = 0;
	for(int i=0; i<cases; i++){
		scanf("%d %d", &N, &K);
		for(int j=1; j<=K; j++){
			total += j+1;
		}
		printf("%d %d\n", N, total);
		total = 0;
	}
	
	return 0;
}
