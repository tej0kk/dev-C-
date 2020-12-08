#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	scanf("%d", &cases); getchar();
	char word[cases+1][32];
	for(int i=0; i<cases; i++){
		scanf("%[^\n]", word[i]); getchar();
		char temp[32];
//		strcpy(temp, word[i]);
		int length = strlen(word[i]);
		for(int j=0; j<length; j++){
			if(temp[j] >= 'A' && temp[j] <= 'Z') temp[j] -= 'A';
			else continue;
		}
		printf("%s", temp[i]);
	}
	
	return 0;
}
