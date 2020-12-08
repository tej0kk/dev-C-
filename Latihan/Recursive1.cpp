#include <stdio.h>


int faktorial(int number){
	if(number == 1) return 1;
	else return number * faktorial(number-1);
}

int main(){
	int number;
	scanf("%d", &number);
	int hasil = faktorial(number);
	printf("%d", hasil);
	return 0;
}
