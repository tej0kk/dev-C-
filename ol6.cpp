#include <stdio.h>

int main(){
	
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	long long int lhs = a*b;
	long long int rhs = c+d;
	
	if(lhs<rhs){
		printf("False\n");
	}
	else if(lhs>rhs){
		printf("True\n");
	}
	else{
		printf("Error\n");
	}
	return 0;
}
