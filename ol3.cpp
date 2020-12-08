#include <stdio.h>
#include <math.h>
int main(){
	
	long long int na, ma;
	long long int nb, mb;
	scanf("%lld %lld\n", &na, &ma);
	scanf("%lld %lld", &nb, &mb);
	
	for(int i=0; i<ma; i++){
		 na = na/2;
	}
	for(int i=0; i<mb; i++){
		 nb = nb/2;
	}
	printf("%lld\n", na+nb);

	return 0;
}
