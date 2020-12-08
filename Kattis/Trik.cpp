#include <stdio.h>
#include <string.h>

int main(){
	
	char word[55];
	scanf("%s", &word);
	getchar();
	int length = strlen(word);
	int cup = 1;
	for(int i=0; i<length; i++){
		if(word[i] == 'A' && cup != 3){
			if(cup == 1)cup = 2;
			else if(cup == 2)cup = 1;
		}
		else if(word[i] == 'B' && cup != 1){
			if(cup == 2)cup = 3; 
			else if(cup == 3)cup =2;
		}
		else if(word[i] == 'C' && cup != 2){
			if(cup == 1)cup = 3;
			else if(cup == 3)cup = 1;
		}
	}
	printf("%d\n", cup);
	return 0;
}

