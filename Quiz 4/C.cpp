#include <stdio.h>

int main(){
	
	int T;
	long long int A;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &A);
		if(A >= -2147483647-1 && A<=2147483647){
			printf("Case #%d: integer\n", i+1);
		}
		else{
			printf("Case #%d: long long\n", i+1);
		}
	}
	
	return 0;
}
