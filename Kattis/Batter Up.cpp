#include <stdio.h>

int main(){
	
	int jumlah;
	scanf("%d", &jumlah);
	int num[105];
	int count = 0;
	float total = 0;
	for(int i=0; i<jumlah; i++){
		scanf("%d", &num[i]);
		if(num[i] >= 0){
			total +=num[i];
			count++;
		}
	}
	printf("%f\n", total / count);
//	printf("%d\n", count);
	
	return 0;
}
