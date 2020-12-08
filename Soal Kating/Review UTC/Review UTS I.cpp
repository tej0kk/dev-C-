#include <stdio.h>

int main(){
	int N,M;
	int arrCount[100000]={};
	int arrPrice[100000]={};
	scanf("%d",&N);
	scanf("%d",&M);
	int priceCounter=0;
	for(int i=0;i<N;i++){
		int temp;
		scanf("%d",&temp);
		if(arrPrice[priceCounter]!=temp){
			priceCounter++;
		}
		arrPrice[priceCounter]=temp;
		arrCount[priceCounter]++;
		
	}
	for(int i=0;i<M;i++){
		int tempPrice;
		int temp;
		scanf("%d",&tempPrice);
		bool priceNotFound=true;
		for(int j=0;j<priceCounter;j++){
			if(arrPrice[j]==temp){
				priceNotFound=false;
				printf("%d\n", arrCount[j]);
				break;
			}
		}
	}
	return 0;
}
