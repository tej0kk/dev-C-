#include <stdio.h>
#include <string.h>

int main(){
		
	char x[35];
	int length;
	scanf("%s", &x);
	length = strlen(x);
	for(int i=0; i<30-length; i++){
		printf("0");
	}
		printf("%s\n", x);
	return 0;
}
