#include <stdio.h>

int main(){
	
	int cases, jumlah;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &jumlah);
		int arr[jumlah];
		for(int j=0; j<jumlah; j++){
			scanf("%d", &arr[j]);
		}
		int temp = 0;
		for(int j=0; j<jumlah; j++){
			for(int k=0; k<jumlah; k++){
				if(j==k) continue;
				else if(arr[j] > arr[k]){
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}
		int hasil = arr[0]-arr[jumlah-1];
		printf("%d\n", hasil*2);
	}
		
	
	return 0;
}
