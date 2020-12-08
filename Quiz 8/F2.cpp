#include <stdio.h>

int main(){
	
	int N, M, K;
	scanf("%d %d %d", &N, &M, &K);
	int arrN[N] = {0};
	int arrLm;int arrRm;
	int index = K;
	for(int i=1; i<=N; i++){
		scanf("%d", &arrN[i]);
		if(i == index){
			if(index-K == 0) arrN[i] += 0;
			else{
				arrN[i] += arrN[i-K];	
			}
			index += K;
//			printf("%d ", index);
//			printf("%d ", arrN[i]);
		}
	}
	index = K;
//	for(int j=1; j<=N; j++){
//		printf("%d ", arrN[j]);
//	}
//	printf("\n");
	int total = 0;
	for(int k=0; k<M; k++){
		scanf("%d %d", &arrLm, &arrRm);
		if(arrLm % K != 0){
			int temp = arrLm % K;
			temp = K-temp;
			arrLm += temp;
		}
		if(arrRm % K != 0){
			int temp = arrRm % K;
			arrRm -= temp;
		}
		printf("%d\n", arrN[arrRm]-arrN[arrLm-K]);
	}
	return 0;
}
