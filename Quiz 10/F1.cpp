#include <stdio.h>
#include <math.h>
long long int jumlah = 0;

void hitung(int arr[], int start, int N){
	if(start == N){
		for(int i=N; i>=0; i--){	
//			printf("%d", arr[i]);
			jumlah += (arr[i]*pow(10,N-i));
		}
//		printf("\n");
	}
	else{
		for(int i=start; i<=N; i++){
			int temp = arr[start];
			arr[start] = arr[i];
			arr[i] = temp;
			hitung(arr, start+1, N);
			temp = arr[start];
			arr[start] = arr[i];
			arr[i] = temp;
		}
	}
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
		hitung(arr, 0, N-1);
		printf("%lld\n", jumlah);
		jumlah = 0;
	}
	return 0;
}
