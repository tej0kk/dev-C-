#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d",&a, &b);
	printf("%d\n",a*(b+b%2)/2);
	return 0;
}
