#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[1005];
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%s", &word);
		printf("Case #%d : ", i+1);
		int length;
		length = strlen(word);
		for(int j=length-1; j>=0; j--){
			printf("%c", word[j]);
		}
		printf("\n");
	}
	return 0;
}
