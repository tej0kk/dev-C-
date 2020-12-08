#include <stdio.h>

int main(){
	
	int T, N;
	scanf("%d", &T);

	for(int i=0; i<T; i++){
		scanf("%d", &N);
		printf("Case #%d:\n", i+1);
		for(int j=2;j<=N;j++){
			if(j == 2){
				printf("I will become a good boy.\n");
			}	
			else if(j%2==1){
				int counter=0;
				for(int k=1; k<=j; k++){
					if(j % k == 0){
						counter++;
					}
				}
				//Blangan prima bisa dibagi oleh bilangannya sendiri atau angka 1
				if(counter == 2){
					printf("I will become a good boy.\n");	
				} 
			}
		}
	}
	return 0;
}
