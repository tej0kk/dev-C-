#include <stdio.h>

long long int GCD(long long int k, long long int l){
	if(l == 0) return k;
	else return GCD(l, k%l);
}
long long int LCM(long long int k, long long int l){
	return k*l;
}
int main(){
	int cases, N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		int arr[N];
		for(int j=0; j<N; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d: ", i+1);
		long long int hasil = 0;
		long long int lcm = 0;
		long long int total = 0;
		for(int k=1; k<N; k++){
//			for(int l=k+1; l<N; l++){
				if(k==1){
					hasil = GCD(arr[k-1], arr[k]);
					total = LCM(arr[k-1], arr[k]);
					lcm = total/hasil;
//					printf("0-1: %d\n", lcm);
				}
				else if(k > 1){
					hasil = GCD(lcm, arr[k]);
					total = LCM(lcm, arr[k]);
					lcm = total/hasil;
//					printf(">1: %d\n", lcm);
				}
			}
//		}
		printf("%lld\n", lcm);
	}
	return 0;
}
