
#include <stdio.h>
#include <string.h>

int main(){
	
	char x[100], y[100];
	int i=0,j=0;
	int lengthx, lengthy;
	scanf("%s %s", &x, &y);
	lengthx = strlen(x);
	lengthy = strlen(y);
	int answer = 0;
	if(lengthx != lengthy){
		answer = 0;
	}
	for(i=0, j=lengthy-1 ; i<lengthx, j>=0 ; i++, j--){
		if(x[i] == y[j]){
			answer = 1;
		}
		else{
			answer = 0;
			break;
		}
	}
	if(answer == 0){
		printf("NOT PALINDROME\n");
	}
	else if(answer == 1){
		printf("PALINDROME\n");
	}
	return 0;
}
