#include <stdio.h>

int main(){
	
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 1){
		printf("%d\n", a+b);
	}
	else if(a == 2){
		printf("%d\n", a-b);
	}
	else if(a == 3){
		printf("%d\n", a*b);
	}
	else if(a == 4, b>0){
		printf("%d\n",a/b);
	}
	else {
		printf("Error\n",a);
	}
	return 0;
}
