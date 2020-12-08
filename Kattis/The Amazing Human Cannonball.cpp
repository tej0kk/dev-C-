#include <stdio.h>
#include <math.h>
int main(){
	
	int cases;
	double V0, teta, X1, H1, H2;
	double g = 9.81;
	double t = 0;
	double y = 0;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%lf %lf %lf %lf %lf", &V0, &teta, &X1, &H1, &H2);
		// radian
		teta *= 3.14;
		teta /= 180;
		t = X1 / (V0 * cos(teta));
		y = (V0 * t *sin(teta)) - (0.5*g*pow(t,2));
		if(y-H1 >= 1 && H2-y >= 1) printf("Safe\n");
		else printf("Not Safe\n");
//		printf("%lf %lf", t, y);
	}
	
	return 0;
}
