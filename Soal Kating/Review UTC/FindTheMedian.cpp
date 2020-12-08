#include <stdio.h>

int main(){
	int i=0;
	int number[1005];
	//==1 buat ngecek msh ada atau engga inputannya
	while(scanf("%d", &number[i])==1){
		i++;
	}
//		printf("%d\n", i);
		for(int j=0; j<i; j++){
			for(int k=0; k<i; k++){
				if(number[j] < number[k]){
					int temp = number[j];
					number[j] = number[k];
					number[k] = temp;
				}
			}	
		}
//		for(int j=0; j<i; j++){
//				printf("%d ", number[j]);
//				}
		i += 1;
		i /= 2;
		printf("%d\n", number[i-1]);
	
	return 0;
}
