#include <stdio.h>
#include <string.h>

int main(){
	
	int cases; int K; char word[1005];
		FILE *file = fopen("testdata.in", "r");
		fscanf(file, "%d\n", &cases);
		for(int i=0; i<cases; i++){
			fscanf(file, "%d\n", &K);
			fscanf(file, "%[^\n]", &word);
			printf("Case #%d: ", i+1);
			int length = strlen(word);
			for(int j=0; j<length; j++){
				if(word[j] == ' '){
					printf(" ");
					continue;
				}
				else if(word[j] == '0'){
					word[j] = 'O';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
				else if(word[j] == '1'){
					word[j] = 'I';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
				else if(word[j] == '3'){
					word[j] = 'E';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				} 
				else if(word[j] == '4'){
					word[j] = 'A';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				} 
				else if(word[j] == '5'){
					word[j] = 'S';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				} 
				else if(word[j] == '6'){
					word[j] = 'G';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
				else if(word[j] == '7'){
					word[j] = 'T';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
				else if(word[j] == '8'){
					word[j] = 'B';
					if((word[j]-K) < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
				else{
					if(word[j]-K < 'A') printf("%c", (word[j] + 26) - K);
					else printf("%c", word[j] - K);
				}
			
			}
			printf("\n");
		}
	fclose;
	return 0;
}
