#include <stdio.h>
#include <string.h>
int main(){
	
	int number;
	scanf("%d", &number);getchar();
	char ABCD[6];
	int totalA = 0; int totalB = 0; int totalC = 0; int totalD = 0; 
	for(int i=0; i<number; i++){
		gets(ABCD);
		if(ABCD[0] == '0') totalA++;
		if(ABCD[1] == '0') totalB++;
		if(ABCD[2] == '0') totalC++;
		if(ABCD[3] == '0') totalD++;
	}
		int AB = totalA+totalB;
		int CD = totalC+totalD;
		int puzzle0 = 0;
	//FPB
	for(int j=1; j<=CD && j<=AB; j++){
		// check if j factor dr CD dan AB
		if(CD%j == 0 && AB%j == 0){
			puzzle0 = j;
		}
	}
	printf("%d %d %d\n", puzzle0, AB, CD);
	
	return 0;
}



