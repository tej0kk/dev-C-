#include <stdio.h>

int main(){
	int cases, number, max;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		int angka[number];
		for(int j=0; j<number; j++){
			scanf("%d", &angka[j]);
		}
		max = 0;
		for(int k=0; k<number; k++){
			for(int l=0; l<number; l++){
				if(k == l)continue;
				if(angka[l] % angka[k] == 0){
					if(max < angka[k])max = angka[k];
				}
			}
		}	
		printf("Case #%d: %d\n",i+1, max);
	}
	
	return 0;
}
