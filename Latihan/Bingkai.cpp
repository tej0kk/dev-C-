#include <stdio.h>


int main(){
	
	int num;
	char symbol[10];
	
	scanf("%d %s", &num, &symbol);
	for(int i=1; i<=num; i++){
		for(int j=1; j<=num; j++)
			if(i == 1 || i == num){
				printf("%s", symbol);
			}
			else if(j == 1 || j == num){
				printf("%s", symbol);
			}
			else if(i == 3 && j == 2){
				printf("#");
			}
			else{
				printf(" ");
			}
		
		printf("\n");
	}
	return 0;
}
/*  J12345
   I1*****
	2*   *
	3*   *
	4*   *
	5*****
*/
