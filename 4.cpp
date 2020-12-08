#include <stdio.h>

int main(){
	//c=cakes f=friends
	int c, f;
	scanf("%d %d", &c, &f);
	//n=number of cake
	int n = c/f;
	//b= number of cake that bibi eat
	int b = c%f;
	printf("%d %d\n", n, b);
	
	return 0;
}
