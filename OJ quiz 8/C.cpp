#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	scanf("%d", &cases); getchar();
	char word[cases+1][105];
	for(int i=0; i<cases; i++){
		scanf("%[^\n]", word[i]); getchar();
//		printf("%s\n", word[i]);
	}
	int jumlahkembar = 0;
	for(int j=0; j<cases; j++){
		bool ada = false;
		for(int k=j; k<cases; k++){
			if(j == k) continue;
//			printf("%s %s \n",word[j],word[k]);
			if(strcmp(word[j], word[k])==0 && strcmp(word[j], "-")!= 0) {
				if (!ada){
				jumlahkembar++;
				ada = true;
				}
				strcpy(word[k], "-");
			}
		}
	}
	printf("You have %d duplicate name(s).\n", jumlahkembar);
	return 0;
}
