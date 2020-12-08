#include <stdio.h>

int main(){
	
	int cases;
	int jumlahAngka, jumlahSoal;
	scanf("%d", &cases);
	int l, r;
	
	for(int i=0; i<cases; i++){
		scanf("%d %d", &jumlahAngka, &jumlahSoal);
		//array ditampung sebanyak jumlahAngka
		int simpanAngka[jumlahAngka];
		for(int j=0; j<jumlahAngka; j++){
			//j di dlm array sebagai penentu dr indeks
			scanf("%d", &simpanAngka[j]);
//			printf("%d", simpanAngka[j]);
		}
		for(int j=0; j<jumlahSoal; j++){
			int jumlah = 0;
			scanf("%d %d", &l, &r);
			for(int k=l-1; k<r; k++){
				jumlah += simpanAngka[k];
			}
			printf("%d\n", jumlah);
		}
	}
	
return 0;
}
