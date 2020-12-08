#include <stdio.h>
#include <string.h>

int main(){
	
	int cases, N,count,count1;
	scanf("%d", &cases);
	getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		getchar();
		char angka[N];
		scanf("%s", angka);
		char a = '1';
		count = 0; // utk 0
//		count1 = 0; // utk 1
		int temp = 0;
		int max = 0;
		char kar = '0';
		for(int j=0; j<N; j++){
			if(angka[j] == a){
				count++; a=angka[j];
				//count1++; count=1; 
			} 
			else if(angka[j] != a){
				count=1; a=angka[j];
				//count++; count1 = 1; //
			}
			if(count > max){
				max = count;
				kar = angka[j];
			}
		}
		printf("Case #%d: %c %d\n", i+1, kar, max);
	}
	
	return 0;
}
