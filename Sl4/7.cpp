#include <stdio.h>

int main(){
	
	int a;
	int n1 = 1,n2 = 0,n3, total;
	scanf("%d", &a);   
	for(int i=0; i<a; i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
	
//		total=n1,n3;
		printf("%d ",n3);
	}
	return 0;
}
