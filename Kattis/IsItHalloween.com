#include <stdio.h>

int main(){
	
	char bulan[5];
	int tanggal;
	scanf("%s %d", bulan, &tanggal); getchar();
	
	if((bulan == "OCT" && tanggal == 31) || (bulan == "DEC" && tanggal == 25)) printf("yup\n");
	else printf("nope\n");
	
	return 0;
}
