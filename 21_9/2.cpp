#include <stdio.h>
#include <string.h>

int main(){
	
	char n[105];
	int length;
	scanf("%s", &n);
	length = strlen(n);
	if(length <=7){
		printf("NO");
	}
	else{
		printf("YES");
	}
	return 0;
}
