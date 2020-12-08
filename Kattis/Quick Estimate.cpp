#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char biaya[1000000];
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%[^\n]", biaya); getchar();
		int length = strlen(biaya);
		printf("%d\n", length);
	}
	return 0;
}
