#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	float number1;
	float number2;
	float number3;
	float number4;
	float number5;
	float number6;
	float x,y;
	scanf("%d", &cases);
//	printf("%d\n", cases);
	// looping buat cases trs baca data
	for(int i=0; i<cases; i++){
		scanf("%f %f %f", &number1, &number2, &number3);
		scanf("%f %f %f", &number4, &number5, &number6);

		//print caseny dl
		printf("Case #%d:\n",i+1);
		// hitung dengan menggunakan rumus
		y = ((number1 * number6) - (number3 * number4)) / ((number1 * number5) - (number2 * number4));
		x = ((number3 - (number2 * y))) / number1;
		printf("x = %.4f\n",x);
		printf("y = %.4f\n",y);
	}

	return 0;
}
