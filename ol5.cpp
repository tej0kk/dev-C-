#include <stdio.h>
#include <math.h>

int main(){
	
	int t,n,x,y;
	scanf("%d", &n);
	t=(n+3);
	if(t%3 == 0){
		x = t/3*2;
		printf("%d\n", x);
	}
	else if(t%3 != 0){
		y = ((t/3*2)+t%3);
		printf("%d\n", y);
	}

	
}
