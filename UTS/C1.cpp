#include <stdio.h>

int main(){
	
	int number;
	scanf("%d", &number);
	int A,B,C,D;
	int totalA, totalB, totalC, totalD;
	int terkecil;
	int puzzle0 = 0;
	for(int i=0; i<number; i++){
		scanf("%d%d%d%d", &A, &B, &C, &D);
		if(A == 0) totalA++;
		
		else if(B == 0) totalB++;
		else if(C == 0) totalC++;
		else if(D == 0) totalD++;
	}
	printf("%d", totalA);
	if(totalA < totalB && totalA < totalC && totalA < totalD) puzzle0 = totalA;
	else if(totalB < totalA && totalB < totalC && totalB < totalD) puzzle0 = totalB;
	else if(totalC < totalA && totalC < totalB && totalC < totalD) puzzle0 = totalC;	
	else if(totalD < totalA && totalD < totalB && totalD < totalC) puzzle0 = totalD;
	printf("%d", puzzle0);
	totalA -= puzzle0;
	totalB -= puzzle0;
	totalC -= puzzle0;
	totalD -= puzzle0;
	int AB = totalA+totalB;
	int CD = totalC+totalD;
	
	while(AB > 1 && CD > 1){
		if( AB < CD) terkecil = AB;
		else if(AB > CD) terkecil = CD;
		AB -= 2;
		CD -= 2;
		puzzle0++;
	}
	printf("%d %d %d\n", puzzle0, AB, CD);
	
	return 0;
}
