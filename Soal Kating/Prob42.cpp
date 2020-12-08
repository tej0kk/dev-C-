#include <stdio.h>
#include <string.h>
int main(){
	
	int cases, row, col, length;
	char word[100005];
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%s", &word);
		length = strlen(word);
		scanf("%d %d", &row, &col);
		if(length != row*col) return 0;
		for(int l=0; l<length; l++){
			if()
		}
			for(int j=0; j<row; j++){
				for(int k=0; k<col; k++){
					if(j == word[j]) printf("%c", word[j]);
				}
				printf("\n");
			}
		
	}
	
	
	return 0;
}
