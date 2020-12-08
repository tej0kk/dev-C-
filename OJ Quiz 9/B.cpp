#include <stdio.h>
int count = 0;
int hitung(int n){
	if(n == 3 || n == 4) count++;
	if(n == 0) return 1;
	else if(n == 1) return 2;
	else if(n % 3 == 0) return hitung(n-(n/3))+1;
	else return hitung(n-1) + n + hitung(n-2) + 1;
}

int main(){
	int cases;
	int N;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		int hasil = hitung(N);
		printf("Case #%d: ", i+1);
		printf("%d %d\n", hasil, count);
		count = 0;
	}
	
	return 0;
}
