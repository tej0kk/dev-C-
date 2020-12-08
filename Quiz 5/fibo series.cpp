#include <stdio.h>
int main() {
	int cases;
    long long int j, number, fibo1 = 1, fibo2 = 1, nextFibo;
    scanf("%d", &cases); getchar();
    for (int i=0; i<cases; ++i){
    	scanf("lld", &number);
    	printf("Case #%d", i+1);
    	for(j=1; j<=number; j++){
        printf("%lld ", fibo1);
        nextFibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = nextFibo;
    	}

    	printf("\n");
    }
    return 0;
}
