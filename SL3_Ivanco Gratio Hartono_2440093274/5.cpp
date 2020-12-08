#include <stdio.h>

int main(){
	
	int a;
	
	do{
		printf("Input a Number:",a);
		scanf("%d", &a);
		
		if(a == -1){
			break;
		}
		else{
//			printf("Input a Number\n",a);
		}
		if(a%2 == 0){
			printf("Genap\n");
		}
		else{
			printf("Ganjil\n");
		}
	}while(1);
		
	return 0;
}


