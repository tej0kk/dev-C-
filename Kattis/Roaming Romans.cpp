#include <stdio.h>

int main(){
	
	double X;
	scanf("%lf", &X);
	X = (X*5280/4854) * 1000;
	
	printf("%.0lf\n", X);
	return 0;
}
