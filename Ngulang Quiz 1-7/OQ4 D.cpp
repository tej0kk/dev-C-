#include <stdio.h>

int main(){
	
	int cases; int number; int p[number]; int q[number];
	scanf("%d", &cases);
	int total = 0;
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		for(int j=0; j<number; j++){
			scanf("%d", &p[j]);
		}
		for(int k=0; k<number; k++){
			scanf("%d", &q[k]);
			
			int count = p[k]*q[k];
//			printf("%d\n", total);
			total += count;
		}printf("Case #%d: %d\n",i+1, total);
	}
//	}
	
	return 0;
}
