#include <stdio.h>

int main(){
	
	int num, cases, A_i; int temp = 0;
	scanf("%d %d", &num, &cases);
	int jumlahNum[num] = {0};
	for(int i=0; i<num; i++){
		scanf("%d", &jumlahNum[i]);
//		printf("%d", jumlahNum[i]);
	}
	for(int j=0; j<cases; j++){
//		A_i;
		bool count = 0;
		scanf("%d", &A_i);
		for(int k=0; k<num; k++){
			temp = 0;
			for(int l=k; l<num; l++){
				temp += jumlahNum[l];
//				printf("%d\n", temp);
				if(temp == A_i){
					printf("Case #%d: %d %d\n", j+1, k, l);
					count = 1;
					break;
				}
			}
				
			if(count == 1) break;
		}
		if(count == 0) printf("Case #%d: -1\n", j+1);
//		printf("Case #%d: %d\n", j+1, A_i);
	}
	
	return 0;
}
