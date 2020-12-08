#include <stdio.h>

int main(){
	
	int x1, x2, x3;
	scanf("%d %d %d", &x1, &x2, &x3);
	if (x1%111==0) {
		printf("0.%d...\n", x1/111);
	}
	else {
		printf("%.3lf...\n", (double)x1/1000);
	}
	
	if (x2%111==0) {
		printf("0.%d...\n", x2/111);
	}
	else {
		printf("%.3lf...\n", (double)x2/1000);
	}
	
	if (x3%111==0) {
		printf("0.%d...\n", x3/111);
	}
	else {
		printf("%.3lf...\n", (double)x3/1000);
	}
	
	return 0;
}
