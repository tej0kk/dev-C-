#include <stdio.h>

int main(){
	
	int number, Nquestion, count;
	scanf("%d %d", &number, &Nquestion);
	int jumlahN[number];
	int question;
	for(int i=0; i<number; i++){
		scanf("%d", &jumlahN[i]);
	}
	
	for(int j=0; j<Nquestion; j++){
		scanf("%d", &question);
		count = 0;
		for(int k=0; k<number; k++){
			if(question >= jumlahN[k]) count++;
		}printf("%d\n", count);
	} 
	
	return 0;
}
