#include <stdio.h>

int main(){
	
	int a,b;
	int m=0,f;
	printf("Input two number ; ");
	scanf("%d %d", &a, &b);
//	int x = (a < b) ? a : b;
	m = a;
	if (a>b){
		m = b;
	}
	int x=1;
	while(x <= m){
		if((a%x == 0) && (b%x == 0)){
			f=x;
		}
	x++;
	}
	printf("Output:%d\n", f);

	return 0;
}
