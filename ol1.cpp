#include <stdio.h>

int main(){
	char x[110];
	char a[10];
	int b;
	scanf("%[^\n]", &x); 
	scanf("%s %d", &a, &b);
	printf("Name: %s\n", x);
	printf("NIS: %s\n", a);
	printf("Age: %d\n", b);
	
	return 0;
}
