#include <stdio.h>
#include <math.h>

int main(){
/*
1 2^0
2 2^1
4 2^2
8 2^3
16 2^4
32 2^5

1 2^0
2 2^1

3 2^2
4 2^3
5 2^4
*/
	
	int cases; int N, M;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &N, &M);
		printf("Case #%d: ", i+1);
		int sum = 0;
		for(int j=N; j<=M; j++){
			sum += (int)pow(double(2), double(j-1));
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
