#include <stdio.h>

int main(){
	//A=Assignment E=Mid exam F=final exam
	double A, E, F;
	scanf("%lf %lf %lf", &A, &E, &F);
	double total = (0.2*A)+(0.3*E)+(0.5*F);
	printf("%.2lf\n",total);
	return 0;
}
