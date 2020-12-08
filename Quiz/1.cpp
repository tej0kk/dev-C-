#include <stdio.h>


int main(){
	
	int t, n;
	int count = 0;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		scanf("%d", &n);
		printf("Case #%d: %d\n", i+1, (n/4) - (n/100) + (n/400));
	}
	
	
	return 0;
}
