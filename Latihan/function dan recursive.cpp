#include <stdio.h>
#include <string.h>
//tipe_data namafunction(){}

//function prototyping
void function2();
int tambah(int a, int b); 
//atau bisa juga
int tambah(int, int);

int tambah(int a, int b){
	int c = a+b;
	return c;
}

void function1(){
	function2();
}
void function2(){
	function1();
}
//recursion
//5!
//5 * 4 * 3 * 2 * 1 => 120
int faktorial(int x){
	//base case => kapan rekursif berhenti
	if(x == 1){
		return 1;
	}
	return x * faktorial(x-1);
}
int fibonacci(int x){
	if(x<=1){
		return 1;
	}
	return fibonacci(x-1) + fibonacci(x-2);
}
// memoization
int memo[50];
// memset => 0(aman) , -1
memset(memo,0,sizeof(memo));
int fibonacciMemo(int x){
	if(x<=1){
		return 1;
	}
	if(memo[x] != kosong){
		return memo[x];
	}
	return memo[x] = fibonacci(x-1) + fibonacci(x-2);
//	memo[x] = fibonacci(x-1) + fibonacci(x-2);
//	return memo[x];
}
int main(){
	
	int hasil = tambah(3,5);
	printf("%d\n", hasil);
	
	// recursion
	printf("hasil dari faktorial(5) => %d\n", faktorial(5));
	
	//fibonacci
	//cara 1
//	printf("Hasil dari fibbonacci(5) => %d\n", fibonacci(40));
	memset(memo,0,sizeof(memo));
	printf("Hasil dari fibbonacciMemo dengan memoisasi(40) => %d\n", fibonacciMemo(40));
	// cara 2
//	int arrayFibo[50];
//	arrayFibo[0] = 1;
//	arrayFibo[1] = 1;
//	
//	for(int i = 2; i<50; i++){
//		arrayFibo[i] = arrayFibo[i-1] + arrayFibo[i-2];
//		printf("Fibo ke %d adalah %d\n", i, arrayFibo[i]);
//	}
//	printf("Fibo(40) => %d\n", arrayFibo[40]);
	return 0;
}
