#include <stdio.h>

int main(){
	
	int period;
	scanf("%d", &period);
	float num1, num2;
	float total = 0;
	for(int i=0; i<period; i++){
		scanf("%f %f", &num1, &num2);
		total += (num1*num2);
	}
	printf("%.3f\n", total);
	return 0;
}
