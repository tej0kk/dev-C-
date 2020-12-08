#include <stdio.h>

int main(){
	
	long long int n;
	scanf("%lld", &n);
	long long int x = n*(2*100+(n-1)*50)/2;
	printf("%lld\n", x);
	
	return 0;
}
