#include <stdio.h>

int fibonacci(int num){
	//Basis
	if((num == 0) || (num == 1)){
		return 1;
	}
	else{
	//Rekurens
		return fibonacci(num-1) + fibonacci(num-2);
	}
}

int main(){
	printf("Bilangan Fibonacci Rekursif\n");
	int number;
	printf("Input Jumlah Bilangan: ");
	scanf("%d", &number);
	for(int i=0; i<number; i++){
		printf("%d ", fibonacci(i));
	}
	printf("\n");
	return 0;
}
