#include <stdio.h>
#include <string.h>
int main(){
	
	char bulan[5];
	int tanggal;
	scanf("%s %d", bulan, &tanggal); getchar();
	int temp = strcmp(bulan,"OCT");
	int temp1 = strcmp(bulan,"DEC");
	if((temp == 0 && tanggal == 31) || (temp1 == 0 && tanggal == 25)) printf("yup\n");
	else printf("nope\n");
	
	return 0;
}
