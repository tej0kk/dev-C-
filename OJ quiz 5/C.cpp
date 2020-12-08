#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[1005];
	scanf("%d", &cases);
	getchar;
	//loopig cases
	for(int i=0; i<cases; i++){
		//baca word
		scanf("%s", &word);
		printf("Case %d: ", i+1);
		int length;
		length = strlen(word);
		for(int j=0; j<length; j++){
			if(j != length-1){
			printf("%d-", word[j]);
			}
			if(j == length-1){
				printf("%d", word[j]);
			}
//			printf("\n");
//			if(word[j] <= 'A' && word[j] >= 'Z'){
//				printf("%d", word[j]);
//			}
//			else if(word[j] <= 97 && word[j] >= 122){
//				printf("%d-", word[j] - '0');
//			}
		}
		printf("\n");
	}
	
	return 0;
}
