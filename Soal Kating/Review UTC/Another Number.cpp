#include <stdio.h>

int main(){
	int cases, A,B,C,D, X;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d %d %d", &A, &B, &C, &D); getchar();
		// misal 98 %50 = 48, 98 = x, x%50 = 48, x = 48+50 = 98
		/* (A*X+B)%D = C
			(Z+B)%D = C
				Z = C+D-B
				A*X = C+D-B
				X = (C+D-B)%A
		*/
		int modulo = B%D;
		if(C>D || D == 0) printf("Case #%d: NO\n", i+1);
		else{
			while(1){
				B += A;
				if(B%D == C){
					printf("Case #%d: YES\n", i+1);
					break;
				}
				if(modulo == B%D){
					printf("Case #%d: NO\n", i+1);
					break;
				}
			}
		}
	}
	return 0;
}
