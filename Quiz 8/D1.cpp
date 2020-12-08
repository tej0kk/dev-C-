#include <stdio.h>
#include <math.h>
int main(){
	
	int cases;
	int angka;
	int count = 0; int temp = 0; int temp2 = 0;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &angka);
		printf("Case #%d: ", i+1);
		temp = 0;
		count = 0;
		int akar = (int)sqrt((double)angka);
		printf("%d\n", akar);
		if(angka % 2 == 0){
//			temp = 0;
//			count =0;
			while(angka % 2 == 0){
				angka /= 2;
				count++;
			}
			if(count > 1){
				printf("NO\n");	
				continue;
			}
			else if(count == 1){
//				temp = 0;
//				count = 0;
				temp++;
			}
		}
//			printf("%d\n", angka);
		for(int j=3; j<=akar; j+=2){
			count = 0;
			if(angka % j == 0){
				while(angka % j == 0){
					angka /= j;
//					printf("%d\n", angka);
					count++;
//					printf("Count %d ", count);
				}
				if(count != 1){
					temp = 0;
					break;
				}
				else if(count == 1){
					temp++;	
				}
			}
		}
		if(angka != 1){
			temp++;
		}
		if(temp == 2){
			printf("YES\n");
//			temp = 0;
			continue;
		}
		else{
			printf("NO\n");
//			temp = 0;
			continue;
		}		
	}
	
	return 0;
}
