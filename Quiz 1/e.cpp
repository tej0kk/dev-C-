#include <stdio.h>

int main(){
	
	char a[110];
	double b;
	
	scanf("%[^\n]",&a);
	getchar();
	scanf("%lf",&b);
	printf("%s finished this semester with \"%.2lf\" GPA. Congratulations!\n",a, b);
	return 0;
}
