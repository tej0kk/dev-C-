#include <stdio.h>

int main(){
	
	int cases;
	long long int number;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%lld", &number);
		//array fibonacci
		long long int fibonacci[100005];
		// buat info ruangan di dalam indeks 0 dan 1 adalah 1 karena fibo yg indeks 0 dan 1 pasti 1
		fibonacci[0] = 0, fibonacci[1] = 1, fibonacci[2] = 1;
		long long int jumlah = 0;
//		long long int temp = 0;
//		long long int fibo1 = 1; long long int fibo2 = 1;
		if(number == 1){
			printf("Case #%d: %lld\n", i+1, fibonacci[1]);
		}
		else if(number == 2){
			printf("Case #%d: %lld\n", i+1, fibonacci[2]+1);
		}
		else{
		for(int j=3; j<=number; j++){
//			fibonacci[j] = fibonacci[j-1] + fibonacci[j-2];
			fibonacci[j] = (fibonacci[j-1] % 1000000009)+ (fibonacci[j-2] % 1000000009);
			jumlah += fibonacci[j];
//			fibonacci[j-1] = fibonacci[j+1];
//			fibonacci[j+1] = fibonacci[j];
//			jumlah += fibo1;
//			temp = fibo1 + fibo2;
//			fibo1 = fibo2;
//			fibo2 = temp;
//			printf("%lld\n", fibonacci[j]);	
		}
		jumlah %= 1000000009;
		printf("Case #%d: %lld\n", i+1, jumlah+2);
		}
	}
	
	return 0;
}
