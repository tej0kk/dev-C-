#include <stdio.h>

int main(){
	int number, Nquestion;
	scanf("%d %d", &number, &Nquestion);
	int jumlahN[number];
	int question;
	for(int i=0; i<number; i++){
		scanf("%d", &jumlahN[i]);
	}
	for(int j=0; j<number; j++){
		for(int k=0; k<number; k++){
			if(jumlahN[j] < jumlahN[k]){
				int temp = jumlahN[j];
				jumlahN[j] = jumlahN[k];
				jumlahN[k] = temp;	
			}
		}
	}
//	for(int j=0; j<number; j++){
//		printf("%d ", jumlahN[j]);
//	}
	
	for(int j=0; j<Nquestion; j++){
		scanf("%d", &question);
		printf("%d\n", jumlahN[question-1]);
	}
	
	return 0;
}
