#include <stdio.h>

int main(){
	
	int number;
	int tempe;
	int count = 0;
	scanf("%d", &number);
	for(int i=0; i<number; i++){
		scanf("%d", &tempe);
		if(tempe < 0){
			count++;	
		}
	}
	printf("%d\n", count);
	return 0;
}
