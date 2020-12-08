#include <stdio.h>

int main(){
	
	int desk, number;
	scanf("%d", &desk); getchar();
	for(int i=0; i<desk; i++){
		scanf("%d", &number); getchar();
		char card[number];
		for(int j=0; j<number; j++){
			scanf("%c", &card[j]);
			printf("%c", card[j]);
		}
	}
		
	return 0;
}
