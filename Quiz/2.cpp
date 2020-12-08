#include <stdio.h>


int main(){
	
	int T, N, A1;
	scanf("%d\n", &T);

	for(int i=0; i<T; i++){
		scanf("%d\n", &N);
		int y = 0; 
		int z = 0;
		for(int j=0; j<N; j++){
			scanf("%d", &A1);
			if( A1%2==0 ) y++;
			else z++;
			}
		printf("Odd group : %d integer(s)\n\n",z);
		printf("Even group : %d integer(s)\n",y);
	}

	return 0;
}
