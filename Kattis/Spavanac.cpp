#include <stdio.h>

int main(){
	
	int H,M;
	scanf("%d %d", &H, &M);
	if(M-45 < 0){
		int temp = (M-45) *-1;
		M = 60 - temp;
		if(H == 0){
			H = 23;
		}
		else H -= 1;
		printf("%d %d", H, M);
	}
	else if(M-45 >= 0){
		M -= 45;
		printf("%d %d\n", H, M);
	}
	return 0;
}
