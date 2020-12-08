#include <stdio.h>
int main(){
	int kuota;
	scanf("%d", &kuota);
	int bulan;
	scanf("%d", &bulan);
		int pakai[bulan];
		for(int j=0; j<bulan; j++){
			scanf("%d", &pakai[j]);
		}
	int max = kuota*bulan;
	for(int k=0; k<bulan; k++){
		max -= pakai[k];
	}
	printf("%d\n", max+kuota);
	return 0;
}
