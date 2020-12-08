#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
	char x[50];
	int length;
	scanf("%[^\n]", &x);
	length = strlen(x);
	
	for(int i=0 ; i<length ; i++){
		if(x[i] == 'A' || x[i] == 'a'){
			printf("%c", '@');
		}
		else if(x[i] == 'I' || x[i] == 'i'){
			printf("%c", '!');
		}
		else if(x[i] == 'O' || x[i] == 'o'){
			printf("%c", '0');
		}
		else if(x[i] == 'E' || x[i] == 'e'){
			printf("%c", '3');
		}
		else{
			printf("%c", x[i]);
		}
	}
	
		
	return 0;
}
