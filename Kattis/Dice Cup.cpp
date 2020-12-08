#include <stdio.h>

int main(){
	
	int dice1, dice2; int temp = 0;
	scanf("%d %d", &dice1, &dice2);
	if(dice1 == dice2) printf("%d\n", dice1+1);
	else{
		if(dice1 > dice2) temp = dice2;
		else temp = dice1;
//		printf("%d", temp);
		if(dice1 < dice2){
			for(int i=temp; i<=dice2; i++){
				printf("%d\n", i+1);
			}
		}
		else if(dice1 > dice2){
			for(int i=temp; i<=dice1; i++){
				printf("%d\n", i+1);
			}
		}
	}
	return 0;
}
