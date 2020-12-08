#include <stdio.h>
#include <math.h>
int main(){
	double number; int count = 0;
	double num = 0;
	while(scanf("%lf", &number)==1){
		count++;
		double temp = sqrt(number);
//		printf("%lf ", temp);
		int akhir = floor(temp);
		temp -= akhir;
		if(temp == 0)number -= number*2;
//		printf("\n%lf", number);
		num += number;	
	}
	printf("Special sum of %d datas is %.0lf",count, num);
	return 0;
}
