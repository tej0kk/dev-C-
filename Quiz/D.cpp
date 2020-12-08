#include <stdio.h>

int main(){
	int T;
	int N;
	long long int price[10005], qty[10005];
	long long int total;
	
	//cases
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		//flavours available
		scanf("%d", &N);	
		total = 0;
		//price
		for(int j=0; j<N; j++){
			scanf("%lld", &price[j]);		
		}
		//qty
		for(int k=0; k<N; k++){
			scanf("%lld", &qty[k]);
		}
		//total
		for(int l=0; l<N; l++){
			total += price[l]*qty[l];
		}	
		printf("Case #%d: %lld\n", i+1, total);
	}
	return 0;
}
