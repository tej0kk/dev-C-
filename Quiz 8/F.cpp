#include <stdio.h>

int main(){
	
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	int arrN[N];
	int arrLm;int arrRm;
	for(int i=1; i<=N; i++){
		scanf("%d", &arrN[i]);
	}
	int total = 0;
	for(int k=0; k<M; k++){
		int temp[N+5] = {0};
		scanf("%d %d", &arrLm, &arrRm);
		for(int j=arrLm; j<=arrRm; j++){
//			printf("%d ", arrN[j]);
			if(j % K == 0) total += arrN[j];
//			else temp[j] = 0;
		}

		printf("%d\n", total);
		total = 0;
//		count = 0;
	}
	
	return 0;
}
