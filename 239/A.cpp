#include <stdio.h>

int main(){
	
	int cases;
	//number == jumlah soal, m= pilihan, answer=jawaban
	int number, m, answer;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &number, &m);
		int banyak[105]= {0};
		for(int j=0; j<number; j++){
			scanf("%d", &answer);
			banyak[answer]++;
			//case 2
			//kalau input 1 berarti banyak[1]= 1
			//kalau input 2 berarti banyak[2]=1
			//kalau input 2 berarti banyak[2]=2
			//kalau input 4 berarti banyak[4]=1
			//kalau input 5 berarti banyak[5]=1
			//case 3
			// input 1 banyak[1]=1
			// input 2 banyak[2]=1
			// input 3 banyak[3]=1
			// input 4 banyak[4]=1
			// input 5 banyak[5]=1
		}
		int sedikit=banyak[1];
		int hasil = 1;
		for(int j=1; j<=m; j++){
			//case 2
			//sedikit 1 > 1 false
			//sedikit 1 > 2 false
			//sedikit 1 > 0 true (hasil = 3)
			//sedikit 0 > 1 false
			//sedikit 0 > 1 false
			//case 3
			//sedikit 1 > 1 false
			//sedikit 1 > 1 false
			//sedikit 1 > 1 false
			//sedikit 1 > 1 false
			//sedikit 1 > 1 false
			if(sedikit > banyak[j]){
				sedikit = banyak[j];
				hasil = j;
			}
		}
		printf("Case #%d: %d\n",i+1, hasil);
	}
	
	
	return 0;
}
