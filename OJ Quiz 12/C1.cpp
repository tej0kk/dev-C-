#include <stdio.h>
#include <math.h>

long long int hitung(long long int N){
//	printf("%lld\n", (1/6) * N * (N+1) * ((2*N)+1));
	return N * (N+1) * ((2*N)+1) / 6 ;
}

int hasil_binary(long long int max, int left, int mid, int right){
	if(left == right) return left;
	else if(left+1 == right) return right;
	mid = left + ((right-left)/2);
	printf("%lld %d %d %d\n", hitung(mid), left, mid, right);
	if(hitung(mid) >= max){
		mid = hasil_binary(max, left, 0, mid);
	}
	else{
		mid = hasil_binary(max, mid, 0, right+1);
	}
	return mid;
}

int main(){
	
	int num_case = 0;
	scanf("%d", &num_case);
	for(int i=0; i<num_case; i++){
		long long int jumlah_maksimal;
		scanf("%lld", &jumlah_maksimal);
		int x = hasil_binary(jumlah_maksimal, 1, 0, sqrt(jumlah_maksimal)+1);
		printf("Case #%d: %d\n", i+1, x);
	}
	
	return 0;
}
