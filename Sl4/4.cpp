#include <stdio.h>

int main(){
	
	int x,y;
	
//	do{
//		printf("Input Two Numbers:");
//		scanf("%d %d", &x, &y);
//		if(y>x){
//			printf("%d%d",x,y);
//			break;
//		}
//		else{
//			printf("Error\n");
//		}
//	
//	}while(1);

	while(1){
			printf("Input Two Numbers:");
		scanf("%d %d", &x, &y);
		if(y>x){
			printf("%d%d",x,y);
			break;
		}
		else{
			printf("Error\n");
		}
	}
	
	return 0;
}
