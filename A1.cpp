#include <stdio.h> 

int main()
{
	//inisial mewakili nama
//	int b , l , j;
//	scanf("%d %d %d", &b, &l, &j);
//	printf("%d %d %d %d %d\n", b, l, j, l, b);
	double a, b;
	scanf("%lf %lf ", &a, &b);
	printf("%.2lf %.2lf %.2lf %.2lf\n", a+b, a-b, a*b, a/b);
return 0;
}
