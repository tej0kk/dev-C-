#include <stdio.h>

int main(){
	
//	int a;
//	scanf("%d",&a);
//	if (a<5){
//		printf("The bells ring %d times\n", a*2);
//	}
//	else {
//		printf("The bells ring %d times\n", (a-(a/5))*2);
//	}
	int x;
	int *ptr_x;
	int **ptr_ptr_x;
	
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;
	**ptr_ptr_x = 112;
	
	printf("%d\n", *ptr_x);
//printf("%8.2f", 3.14159); 
	return 0;
}
