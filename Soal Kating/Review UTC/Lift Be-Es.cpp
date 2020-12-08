#include <stdio.h>

int main(){
	
	int cases, number, count;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		int lift[number];
		for(int j=0; j<number; j++){
			scanf("%d", &lift[j]);
		}
		count = 0;
		for(int k=1; k<number; k++){
			if(lift[k-1] == lift[k] || lift[k] == lift[k+1])count++;
			else count++;
		}
		printf("Case #%d: %d\n",i+1, count);
//		for(int k=0; k<number; k++){
//			for(int l=0; l<number; l++){
//				if(k == l)continue;
//				else if(lift[k])
//			}
//		}
	}
	
	return 0;
}
