#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		int k,a,b;
		scanf("%d %d %d", &k, &a, &b);
		printf("Case #%d: ", i+1);
		int total1 = 0;
		int total2 = 0;
		total1 = (a+b);
		total1 %= k;
		total2 = ((a%k) + (b%k));
		total2 %= k;
		if(total1 == total2){
			printf("%d", total1);
		}
		printf("\n");
	}
	
	return 0;
}
