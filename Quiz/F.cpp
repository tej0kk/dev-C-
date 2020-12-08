#include<stdio.h>

int main(){
	
	long long int T,N;
	long long int temp = 0;
	long long int total = 0;
	long long int X;
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		temp = 0;
		total = 0;
		scanf("%lld", &N);
		temp = N;
		if(N>0 && N<10){
			printf("Case #%d: %lld", i+1,N);
		}
		else{
			total=0;
			printf("Case #%d: %lld", i+1, N);
			do{
			X = total + (N%10);
			total = X;
			N /= 10; 
			
			if(N == 0){
				if(total < 10){
					printf("% lld",total);
					break;
				}
				else{
					printf("% lld",total);
				}
				N = total;
				total = 0;
			}
			}while(N != 0);
		}
		printf("\n");
	}
	
	return 0;
}

//99999999999 = 99 = 18 = 9
//999999999999999 = 135 = 9
//999999999999993 = 129 = 12 = 3
