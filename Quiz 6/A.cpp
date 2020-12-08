#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	int song;
	char title[105];
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &song);
		printf("Case #%d:\n", i+1);
		for(int j=0; j<song; j++){
			scanf("%s", &title);
			int length;
			char temp[105] = {0};
			length = strlen(title);
			if(length == 0 || length >= 10){
				strcpy(temp, title);
				printf("%s\n", temp);
			}

			
		}
		printf("\n");
	}
	
	return 0;
}
