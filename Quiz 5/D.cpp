#include <stdio.h>

int main(){
	
	int cases, baris, kolom;
	scanf("%d", &cases);
//	scanf("%d\n%d %d", &cases, &baris, &kolom);
	
	
	for(int i=0; i<cases; i++){
		int jumlahdimakan = 0;
		char makan[15][15];
		char yangdimakan[15][15];
		scanf("%d %d", &baris, &kolom);
		//LOOPING INPUTAN KUE
		for(int j=0; j<baris; j++){
		//AMBIL INPUTAN PER BARIS
		scanf("%s", &makan[j]);
//				printf("%s\n", makan[j]);
		}
		//LOOPING BARIS, PERIKSA BARIS
		for(int j=0; j<baris; j++){
			bool adaS = false;
			for(int k=0; k<kolom; k++){
				if(makan[j][k] == 'S'){
					adaS = true;
					break;
				}
			}
			if(adaS == false){
				for(int k=0; k<kolom; k++){
					makan[j][k] = '#';
//					printf("baris: %c\n", makan[j][k]);
				}
			}
		}
		//PERIKSA KOLOM
		for(int j=0; j<kolom; j++){
			bool adaS = false;
			for(int k=0; k<baris; k++){
				if(makan[k][j] == 'S'){
					adaS = true;
					break;
				}
			}
			if(adaS == false){
				for(int k=0; k<baris; k++){
				makan[k][j] = '#';
//				printf("kolom: %c\n", makan[k][j]);
				}
			}	
		}
		//PERIKSA JUMLAH YANG DIMAKAN
		for(int j=0; j<baris; j++)	{
			for(int k=0; k<kolom; k++){
				if(makan[j][k] == '#'){
					jumlahdimakan++;
//					printf("Makan enak %d %d",j,k);
				}
			}
		}
		printf("Case #%d: %d\n",i+1, jumlahdimakan);
	}
	
	return 0;
}
