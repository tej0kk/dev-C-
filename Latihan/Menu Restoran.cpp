#include <stdio.h>

int main(){
	
	char pesanan[1005];
	int choose;
	
	do{
		printf("Order queue:\n");
		printf("No order yet\n\n");
		printf("18-2 Restaurant\n");
		printf("===============\n");
		printf("1. New Order\n");
		printf("2. Serve Order\n");
		printf("3. Close Restaurant\n");
		printf(">> ");
		do{
			scanf("%d", &choose); getchar();
			if(choose <1 && choose >3) break;
		}while(choose != 1 || choose != 2 || choose != 3);
		
//		switch(){
			
//		}
	break;
	}while(1);
	
	return 0;
}
