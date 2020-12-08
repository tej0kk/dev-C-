#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases); getchar();
	char max[5] = {'!', '%', '&', '^', '|'};
	for(int i=0; i<cases; i++){
		int check[5] = {0};
		char kar[3];
		for(int x=0; x<3; x++){
		scanf("%c", &kar[x]); getchar();
		}
		printf("Case #%d: ",i+1);
	for(int j=0; j<3; j++){
		for(int k=0; k<5; k++){
			if(max[k] == kar[j]) check[k]++;
		}
	}
	for(int k=0; k<=3; k++){
		if(check[k] != 0) printf("%c ", max[k]);
	}
	printf("\n");
}
	return 0;
}
