#include <stdio.h>

int main(){
	
	int a,b;
	int i;
	scanf("%d %d", &a, &b);
	int x = (a > b) ? a : b;
	while(1){
		if ((x % a == 0) && (x % b == 0)){
		printf("%d\n", x);
		break;
		}
		x++;
	}
	

	return 0;
}
