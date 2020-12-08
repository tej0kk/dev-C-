#include <stdio.h>


int fibo(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	else{
		return fibo(n-2) + fibo(n-1);
	}
	
}

int main(){
	printf("fibo(n): %d\n", fibo(7));
	return 0;
}
