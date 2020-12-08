#include <stdio.h>

int GGCD(int k, int l){
	if(k == l) return k;
	else if(k < l) return GGCD(l, k);
	else if(k > l && l != 0) return GGCD(l, k%l);
	else if(k > l && l == 0) return k;
}

int main(){
	int cases, N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		int arr[N];
		int max = 0;
		for(int j=0; j<N; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d: ", i+1);
		for(int k=0; k<N-1; k++){
			for(int l=k+1; l<N; l++){
				int hasil = GGCD(arr[k], arr[l]);
//				printf("Hasil: %d\n", hasil);
				if(max < hasil) max = hasil;
			}
		}
		printf("%d\n", max);
	}
	
	return 0;
}
