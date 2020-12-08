#include <stdio.h>

int main(){
	
	int cases; long long int number, fibo[100005];
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%lld", &number); getchar();
		printf("Case #%d: ",i+1);
		fibo[0] = 0; fibo[1] = 1; fibo[2] = 1;
		long long jumlah = 0; 
		if(number == 1) printf("%lld", fibo[1]);
		else{
			for(int j=2; j<=number; j++){
				fibo[j]  = (fibo[j-1] % 1000000009)+ (fibo[j-2] % 1000000009);
				jumlah += fibo[j];
			}
			jumlah %= 1000000009;
		printf("%lld", jumlah+fibo[1]);
		}
		printf("\n");
	}
	
	return 0;
}
