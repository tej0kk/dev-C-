#include <stdio.h>
#include <string.h>
int main(){
	
	int cases; char suit; int total;
	
	int dominant[8] = {11,4,3,20,10,14,0,0};
	int notDominant[8]= {11,4,3,2,10,0,0,0}; 
	int checklist[8] = {0};
	int checklist1[8] = {0};
	scanf("%d %c", &cases, &suit); getchar();
	char card[cases*4+1];
	char suit1[cases*4+1];
	for(int i=0; i<cases*4; i++){
		
//		printf("%d", dominant[i]);
		scanf("%c %s", &card[i], &suit1[i]); getchar();
//		printf("%c %c", card, suit1[i]);
//		for(int j=0; j<cases*4; j++){
		if(suit1[i] == suit){
			if(card[i] == 'A'){
				checklist[0]++;
//				total += dominant[0];
			}
			else if(card[i] == 'K') checklist[1]++;//total += dominant[1];
			else if(card[i] == 'Q') checklist[2]++;//total += dominant[2];
			else if(card[i] == 'J') checklist[3]++;//total += dominant[3];
			else if(card[i] == 'T') checklist[4]++;//total += dominant[4];
			else if(card[i] == '9') checklist[5]++;//total += dominant[5];
			else if(card[i] == '8') checklist[6]++;//total += dominant[6];
			else if(card[i] == '7') checklist[7]++;//total += dominant[7];
		}
//	}
		else if(suit1[i] != suit){
			if(card[i] == 'A') checklist1[0]++;//total += notDominant[0];
			else if(card[i] == 'K') checklist1[1]++;//total += notDominant[1];
			else if(card[i] == 'Q') checklist1[2]++;//total += notDominant[2];
			else if(card[i] == 'J') checklist1[3]++;//total += notDominant[3];
			else if(card[i] == 'T') checklist1[4]++;//total += notDominant[4];
			else if(card[i] == '9') checklist1[5]++;//total += notDominant[5];
			else if(card[i] == '8') checklist1[6]++;//total += notDominant[6];
			else if(card[i] == '7') checklist1[7]++;//total += notDominant[7];
		}
	}
	for(int i=0; i<8; i++){
		if(checklist[i] != 0){
			total += (checklist[i]*dominant[i]);
		}
		if(checklist1[i] != 0){
			total += (checklist1[i] * notDominant[i]);
		}
	}
	printf("%d\n", total);
	total = 0;
	return 0;
}
