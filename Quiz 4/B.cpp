#include <stdio.h>

int main(){
	//T=Cases N=number in array 
	int T, N, number;
	int jojo = 0, lili = 0;
	//cases
	scanf("%d", &T);
	getchar();
	for(int i=0; i<T; i++){
		//number in array
		jojo = 0;
		lili = 0;
		scanf("%d", &N);
		getchar();
		printf("Case #%d: ",i+1);
		
		for(int j=0; j<N; j++){
			//number
			scanf("%d", &number);
			getchar();
			if ( number<0){
				number *= (-1);
			}
			//jojo++ jika angka index genap dan jika angkany juga genap
			if(number % 2 == 0 && j % 2 == 0 ){
				jojo++;
			}
			//lili++ jika angka index ganjil dan jika angkany juga ganjil
			else if(number % 2 == 1 && j % 2 == 1 ){
				lili++;
			}
		}	
		//jika jojo dan lili menang
		if(jojo % 2 == 0 && lili % 2 == 1){
			printf(":|\n");
		}
		//jika jojo dan lili kalah
		else if(jojo % 2 == 1 && lili % 2 == 0){
			printf(":|\n");
		}
		//jika jojo menang
		else if(jojo % 2 ==0 && lili % 2 == 0){
			printf(":)\n");	
		}
		else if(jojo % 2 == 1 && lili % 2 == 1){
			printf(":(\n");
		}
	}
	return 0;
}
