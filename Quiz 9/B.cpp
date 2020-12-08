#include <stdio.h>

int temp;
int ackermann(int M, int N){
	if(M == 0){
		temp = N+1;
		return temp;
//		return N+1;
	}  
	else if(M > 0 && N==0){
		temp = ackermann(M-1,1);
		return temp;
	}
	else if(M > 0 && N > 0){
		temp = ackermann(M-1, ackermann(M,N-1));
		return temp;
	} 
}


int main(){
		
	int M, N;
	scanf("%d %d", &M, &N);
	printf("result: %d\n", ackermann(M, N));
	return 0;
}

