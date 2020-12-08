#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[105];
	char search[105] = "L0V3";
	scanf("%d", &cases);
	getchar();
	char *result;
	for(int i=0; i<cases; i++){
		gets(word);
		result = strstr(word, search);
		printf("%s\n", result);
		if(result != NULL ){
			printf("Case #%d: Bibi <3\n", i+1);
		}
		else{
			printf("Case #%d: Not Bibi\n",i+1);	
		}
	}
	
	
	
	return 0;
}
