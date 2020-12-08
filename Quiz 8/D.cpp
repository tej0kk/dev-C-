#include <stdio.h>
#include <math.h>
int main(){
	
	int cases;
	int angka;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &angka);
		int akar = (int)sqrt((double)angka);
		printf("%d\n", akar);
		int count = 0; int temp = 0;
		
		for(int j=3; j<=akar+1; j+=2){
			if(2*j == angka){
				for(int l=1; l<=j; l++){
					if(j%l == 0) temp++;
				}
				if(temp == 2)count = 1;
//				printf("%d %d ", count, j);
				continue;
			}
			else{
				angka /= akar;
				for(int l=1; l<=j; l++)  {
					if(angka%l == 0) temp++;
				}
			}

			if(count == 0) printf("Case #%d: NO\n", i+1);
			else printf("Case #%d: YES\n", i+1);
		}
	}
	
	return 0;
}
