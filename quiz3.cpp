#include <math.h>
#include <stdio.h>

int main(){
	
	int n,m;
	
	scanf("%d %d",&n, &m);
	n = pow(2,n);
	printf("%d\n",n%m);
	
	
	return 0;
}
