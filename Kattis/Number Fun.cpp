#include <stdio.h>

int main(){
	
	int cases, a,b,c;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a*b == c) printf("Possible\n");
		else if((double)a/b == c || (double)b/a == c) printf("Possible\n");
		else if(a-b == c || b-a == c) printf("Possible\n");
		else if(a+b == c) printf("Possible\n");
		else printf("Impossible\n");
	}
	
	return 0;
}
