#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	scanf("%d", &cases); getchar();
	char word1[cases][20]; char word2[cases][20];
	for(int i=0; i<cases; i++){
		scanf("%s %s", word1[i], word2[i]); getchar();
	}
		char index[cases][20]; int count = 0; int temp = 0;
		printf("%s %s\n", word1[0], word2[0]);
		for(int j=0; j<cases; j++){
			for(int k=j-1; k>=0; k--){
				if(strcmp(word1[j],word1[k])!=0) count = 1;
				else if(strcmp(word1[j],word1[k])==0) {
					count = 0;
					break;
				}
			}
			if(count == 1){
				printf("%s %s\n", word1[j], word2[j]);
				temp++;
			}
			if(temp == 11) break;
		}
	return 0;
}
