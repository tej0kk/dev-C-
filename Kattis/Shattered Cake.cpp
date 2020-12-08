#include <stdio.h>

int main(){
	
	int W, N, w,l;
	int L = 0;
	scanf("%d", &W);
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d %d", &w, &l);
		L += (w*l);
	}
	printf("%d\n", L/W);
	return 0;
}
