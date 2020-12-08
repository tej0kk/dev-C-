#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	int number[cases];
	for(int i=0; i<cases; i++){
		scanf("%d", &number[i]);
	}
	int min = number[0];
	//int count = 0; int temp = 0;
	for(int j=0; j<cases; j++){
		if(min > number[j]){
			min = number[j];
//			count++;
		}
	}
	for(int j=0; j<cases; j++){
		if(min == number[j]){
			printf("%d\n", j);
			break;	
		}
	}
	return 0;
}
