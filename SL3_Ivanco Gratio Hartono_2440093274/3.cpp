#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){
	char x[50];
	int length;
	scanf("%[^\n]", &x);
	length = strlen(x);
	for(int i=0 ; i<length ; i++){
		if(i%2 == 0 && x[i]>=65 && x[i]<=90){
			x[i]=x[i]+32;	
		}
		else if(i%2 == 1 && x[i]>=97 && x[i]<=121){
			x[i]=x[i]-32;
		}
	}	
	printf("%s\n", x);
	return 0;
}
