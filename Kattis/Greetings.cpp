#include <stdio.h>
#include <string.h>

int main(){
	
	char word[1005];
	scanf("%[^\n]", word); getchar();
	int length = strlen(word);
	int count = 0;
	int checklist[26] = {0};
	for(int i=0; i<length; i++){
		if(word[i] == 'e'){
			count++;
			checklist[4]++;
		}
		else checklist[word[i]++];
	}
	for(int i=0; i<length; i++){
		printf("%c", word[i]);
		if(checklist[i] == count){
			for(int i=0; i<checklist[4]*2; i++){
				printf("e");
			}
		}
		
	}
	printf("\n");
	
	return 0;
}
