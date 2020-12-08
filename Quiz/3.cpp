#include <stdio.h>


int main(){
	
	long long N,P;
	long long b;
	scanf("%lld %lld\n", &N, &P);
	int count=0;
	for(int i=0; i<P; i++){
		scanf("%lld", &b);
		if(b<P) count++;
	}
		printf("%lld\n", count);
		
	return 0;
}
