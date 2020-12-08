#include <stdio.h>

int hitung(int N){
	if(N == 1) return 1;
	else if(N % 2 == 1) return hitung(N-1) + hitung(N+1);
	else if(N % 2 == 0) return hitung(N/2);
}	

int main(){
	int cases;
	int N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		int hasil = hitung(N);
		printf("%d\n", hasil);
	}
	
	return 0;
}
