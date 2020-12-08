#include <stdio.h>
#include <string.h>
int main(){
	int cases, jumlah; char angka[100005];
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %s", &jumlah, &angka);
		int count = 0; 
		int length = strlen(angka);
		for(int j=0; j<length; j++){
			if(angka[j] == '0'){
			count++;
			}
			else continue;	
		}printf("Case #%d: %d\n",i+1, count);
	} 
	return 0;
}
