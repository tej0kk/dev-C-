#include <stdio.h>

int main(){
	
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	
	printf("%.2lf %.2lf %.2lf %.2lf\n",num1+num2, num1-num2, num1*num2, num1/num2);
	
	return 0;
}
