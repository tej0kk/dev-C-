#include <stdio.h>

int main(){
	
	int a = 1,x,y;
	printf("Input Two number: ");
	scanf("%d %d", &x, &y);	
	
	if(y==0){
		a = 1;
	}
	else if(y>=1){
		for(int i=1; i<=y; i++){
			a*=x;
		}
	}
	printf("%d\n", a);
	return 0;
}
