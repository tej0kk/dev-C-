#include <stdio.h>
#include <string.h>

int main(){
	
	char word[35];
	char kunci[] = {"iss"};
	int count = 0;
	scanf("%s", &word);
	int length = strlen(word);
	for(int i=0; i<length; i++){
		int length1 = strlen(kunci);
//		printf("%d", length1);
		for(int k=0; k<length1; k++){
			if(kunci[k] == word[i]){
//				printf("%c", kunci[k]);
				count++;
			
			}
		}
	}
		printf("%d\n", count);
		if(count == 3){
			printf("hiss\n");
		}
		else{
			printf("no hiss\n");
		}
	return 0;
}
