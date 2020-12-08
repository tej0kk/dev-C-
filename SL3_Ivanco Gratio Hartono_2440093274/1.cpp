#include <stdio.h>

int main(){
	
	int X;
	
	scanf("%d",&X);
	
	if(X>84 && X<101){
		printf("A\n", X);
	}
	else if(X>74 && X<85){
		printf("B\n", X);
	}
	else if(X>64 && X<75){
		printf("C\n", X);
	}
	else if(X>-1 && X<65){
		printf("D\n", X);
	}
	else{
		printf("error\n", X);
	}
	return 0;
}
