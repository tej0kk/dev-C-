#include <stdio.h>
#include <math.h>
int main(){
	
	double n;
	scanf("%lf", &n);
	long long int x = pow(2,n)-1;
	printf("%lld\n", x);	
	return 0;
}
