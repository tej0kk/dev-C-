#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[1005];
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		gets(word);
		printf("Case #%d:\n", i+1);
		int dictionary[26] = {0};
		int length = strlen(word);
		for(int j=0; j<length; j++){
			if(word[j] >='a' && word[j] <='z'){
				dictionary[word[j]-'a']++;
			}
			else if(word[j] >='A' && word[j] <='Z'){
				dictionary[word[j]-'A']++;
			}
			else continue;
		}
		for(int k=0; k<=25; k++){
			if(k != 0 && k%5 == 4 || k ==25)printf("%c :%d\n", k+'A', dictionary[k]);
			else printf("%c :%d, ", k+'A', dictionary[k]);
		}
		printf("\n");
	}
	
	return 0;
}
