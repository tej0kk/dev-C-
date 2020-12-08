#include <stdio.h>

int main(){
	
	int n, m, p;

	scanf("%d\n", &n);
	scanf("%d %d", &m, &p);
	//s= m*p (amount of students)
	int s = m*p;
	//c= n/s (candy per students)
	int c = n/s;
	printf("%d %d\n", c, n-(c*s));
	
	
	return 0;
}
