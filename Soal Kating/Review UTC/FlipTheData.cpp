#include <stdio.h>
#include <string.h>
int main(){
	
	char word[100005];
	while(scanf("%[^\n]", &word)==1){
		getchar();
		int length = strlen(word);
		for(int i=length-1; i>=0; i--){
//			if(word[i] == ' ')continue;
//			else{
				printf("%c", word[i]);
//			}
		}
		printf("\n");
	}
	
	return 0;
}
