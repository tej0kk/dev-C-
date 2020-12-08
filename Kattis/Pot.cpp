#include <stdio.h>

int main(){
	
	int cases, total;
	scanf("%d", &cases);
	int number[cases];
	total = 0;
	int hasil = 0;
	for(int i=0; i<cases; i++){
		scanf("%d", &number[i]);
	}
		int hasilP = 0;
	for(int j=0; j<cases; j++){
		int pangkat = number[j]%10;
		if(pangkat == 0){
			total += 1;
			continue;
		}
//		printf("%lld\n", pangkat);
		hasilP=number[j]/10;
		int temp = number[j]/10;
//		printf("%lld\n",number[j]);
		for(int j=1; j<pangkat; j++){
			hasilP *= temp;
		}	
		total += hasilP;
		temp = 0;
	}
	printf("%d\n", total);
	return 0;
}
