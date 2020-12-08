#include <stdio.h>
#include <string.h>

int main(){
	char word[105];
	int length;
	scanf("%s", &word);
	length = strlen(word);
	char temp[50];
	for(int i=0; i<length; i++){
		if(word[i] == 'A' || word[i] == 'a'){
//			printf(".")
			continue;
		}
		else if(word[i] == 'O' || word[i] == 'o'){
//			printf(".");
			continue;
		}
		else if(word[i] == 'Y' || word[i] == 'y'){
//			printf(".");
			continue;
		}
		else if(word[i] == 'E' || word[i] == 'e'){
//			printf(".");
			continue;
		}
		else if(word[i] == 'U' || word[i] == 'u'){
//			printf(".");
			continue;
		}
		else if(word[i] == 'I' || word[i] == 'i'){
//			printf(".");
			continue;
		}
		else if(word[i] > 64 && word[i] < 91){
			printf(".%c", word[i]+32);
		}
		else{
//			word[i];
			printf(".%c", word[i]);
		}
		
	}
//	int lengthtemp;
//	lengthtemp = strlen(temp);
//	for(int j=0; j<lengthtemp; j++){
//		if(temp[j] > 64 && temp[j] < 91){
//			printf(".%s", temp[j]+32);
//		}
//		else{
//			printf(".%s", temp[j]);
//		}
//	}
	return 0;
}
