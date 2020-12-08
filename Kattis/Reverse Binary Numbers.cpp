#include <stdio.h>
#include <math.h>

int connvertBiner(int N){
	int biner = 0;
	int temp, i = 1, step = 1;
	while(N != 0){
		temp = N % 2;
		N /= 2;
		biner += temp * i;
		i *= 10;
	}
	return biner;
	int temp1, sum = 0;
	while(biner>0){
		temp1 = biner % 10;
		sum += (sum%10) + temp1;
		biner = biner/10;
	}
	biner = sum;
//	return biner;
}

//int reverseBinary(int N){
//	connvertBiner(N);
//	for(int i=
//}
int main(){
	int N;
	scanf("%d", &N);	
	printf("%d", connvertBiner(N));
//	connvertBiner(N);
	return 0;
}
