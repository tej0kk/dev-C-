#include <stdio.h>

//int tiga(int x, int l){
//	if(x == )
//}


int main(){
	
	int cases, x, l;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &x, &l);
		printf("Case #%d: ", i+1);
		int total = 0;
		for(int j=l; j>=l; j--){
			if(j%5 == 0) total = j;
			else if(j%4 == 0){
				if(total < j){
					total = j;
					printf("%d\n", total);
				}
			}
			else if(j%3 == 0){
				if(total < j) total = j;
			}
		}
		printf("%d\n", total);
	}
	
	return 0;
}
