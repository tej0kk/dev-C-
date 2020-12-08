#include <stdio.h>

int main(){
	
	unsigned int gold, silver, copper;
	scanf("%d %d %d", &gold, &silver, &copper);
	
	int PowerGold = 3;
	int PowerSilver = 2;
	int PowerCopper = 1;
	
	int count = (gold * PowerGold) + (silver * PowerSilver) + (copper * PowerCopper);
	if(count >= 0 && count < 2) printf("Copper\n");
	else if(count == 2) printf("Estate or Copper\n");
	else if(count == 4 || count == 3) printf("Estate or Silver\n");
	else if(count == 5) printf("Duchy or Silver\n");
	else if(count == 6 || count == 7) printf("Duchy or Gold\n");
	else if(count >= 8) printf("Province or Gold\n");
	
	return 0;
}
