#include <stdio.h>

int main(){
	
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	num1 %=10;
	num1 *= 10;
	num2 /=10;
	num1 += num2;
	printf("%d\n", num1);
	
	return 0;
}
