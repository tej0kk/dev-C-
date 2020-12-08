#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[1005];
	scanf("%d", &cases);
	getchar();
	for(int i=0; i<cases; i++){
		gets(word);
		int length;
		length = strlen(word);
		char temp[1005];
		for(int j=0; j<length; j++){
			if(word[j] != 'f' && word[j] != 'F'){
//				temp[j] = word[j];
				printf("%c", word[j]);
			}
			else{
			break;
			}
		}
		printf("\n");
//		printf("%s\n", temp);
	}
	return 0;
}
