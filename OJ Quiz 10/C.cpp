#include <stdio.h>
#include <string.h>
int main(){
	
	int index = 0;
	FILE *file = fopen("testdata.in", "r");
	if(!file){
		printf("Error! Opening FIle");
	}
	int cases;
	int checklist[30] = {0};
	char word[1005];
	while (!feof(file)){
		fscanf(file, "%d", &cases);
		for(int i=0; i<cases; i++){
			fscanf(file, "%[^\n]", word);
			printf("Case #%d:\n", i+1);
			int length = strlen(word);
			for(int j=0; j<length; j++){
				if(word[j] == ' ') continue;
				else{
					int temp = word[j];
					temp -= 65;
					if(temp > 26) temp -= 32;
					checklist[temp]++;
				}
			}
			for(int k=0; k<26; k++){
				printf("%c : %d, ", k+'A', checklist[k]);
			}
			printf("\n");
		}
	}
	
	fclose;
	return 0;
}
