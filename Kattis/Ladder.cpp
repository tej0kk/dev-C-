#include <stdio.h>
#include <math.h>

int main(){
	
	int panjang, v;
	double radian;
	scanf("%d %d", &panjang, &v);
	radian = (double)v*(M_PI/180);
	int hasil =  (double)panjang/sin(radian);
	printf("%d\n", hasil+1);
	
	
	return 0;
}
