#include <stdio.h>
#include <string.h>
int main(){
	
	char word[1005];
	gets(word);
	int length = strlen(word);
	for(int i=0; i<length; i++){
		if(word[i] == 'A' || word[i] == 'a'){
		printf("@");
		}
		else if(word[i] == 'B' || word[i] == 'b'){
		printf("8");
		}
		else if(word[i] == 'C' || word[i] == 'c'){
		printf("(");
		}
		else if(word[i] == 'D' || word[i] == 'd'){
		printf("|)");
		}
		else if(word[i] == 'E' || word[i] == 'e'){
		printf("3");
		}
		else if(word[i] == 'F' || word[i] == 'f'){
		printf("|=");
		}
		else if(word[i] == 'G' || word[i] == 'g'){
		printf("6");
		}
		else if(word[i] == 'H' || word[i] == 'h'){
		printf("]-[");
		}
		else if(word[i] == 'I' || word[i] == 'i'){
		printf("|");
		}
		else if(word[i] == 'J' || word[i] == 'j'){
		printf("_|");
		}
		else if(word[i] == 'K' || word[i] == 'k'){
		printf("|<");
		}
		else if(word[i] == 'L' || word[i] == 'l'){
		printf("|_");
		}
		else if(word[i] == 'M' || word[i] == 'm'){
		printf("[]\\/[]");
		}
		else if(word[i] == 'N' || word[i] == 'n'){
		printf("[]\\[]");
		}
		else if(word[i] == 'O' || word[i] == 'o'){
		printf("0");
		}
		else if(word[i] == 'P' || word[i] == 'p'){
		printf("|D");
		}
		else if(word[i] == 'Q' || word[i] == 'q'){
		printf("(),");
		}
		else if(word[i] == 'R' || word[i] == 'r'){
		printf("|Z");
		}
		else if(word[i] == 'S' || word[i] == 's'){
		printf("$");
		}
		else if(word[i] == 'T' || word[i] == 't'){
		printf("\'][\'");
		}
		else if(word[i] == 'U' || word[i] == 'u'){
		printf("|_|");
		}
		else if(word[i] == 'V' || word[i] == 'v'){
		printf("\\/");
		}
		else if(word[i] == 'W' || word[i] == 'w'){
		printf("\\/\\/");
		}
		else if(word[i] == 'X' || word[i] == 'x'){
		printf("}{");
		}
		else if(word[i] == 'Y' || word[i] == 'y'){
		printf("%c/",96);
		}
		else if(word[i] == 'Z' || word[i] == 'z'){
		printf("2");
		}
		else if(word[i] == 32 )printf(" ");
		else printf("%c", word[i]);
	}
	printf("\n");
	
	return 0;
}
