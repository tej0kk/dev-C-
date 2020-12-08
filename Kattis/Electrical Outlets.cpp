#include <stdio.h>

int main(){
	
	int cases;
	int jumlah;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &jumlah);
		int arr[jumlah];
		int total = 0;
		for(int j=0; j<jumlah; j++){
			scanf("%d", &arr[j]);
			total += arr[j];
		}
//		for(int j=0; j<jumlah; j++){
//			printf("%d", arr[j]);
////			total += arr[i];
//		}
		jumlah -= 1;
		printf("%d\n", total-jumlah);
	}
	
	return 0;
}
