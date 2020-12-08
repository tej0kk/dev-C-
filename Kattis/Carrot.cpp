#include <stdio.h>

int main(){
	
	int N,P;
	char a[50];
	
	scanf("%d %d", &N, &P);
	scanf("%s", &a);
	
	printf("%d\n", (N+P)-N);
	
	return 0;
}
