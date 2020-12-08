#include <stdio.h>
#include <string.h>

int main(){
	int num;
	char key[50];
	char answer[50];
	int count = 0;
	while(1){
		scanf("%d", &num); getchar();
		if(num == -1) break;
		else{
			scanf("%s", key); getchar();
			int length = strlen(key);
			scanf("%s", answer); getchar();
			int length1 = strlen(answer);
			int countT = 0;
			int countF = 0;
			bool temp = true;
			int checklist[length-1] = {0};
			for(int i=0; i<length1; i++){
				for(int j=0; j<length; j++){
					if(key[j] == answer[i]) checklist[j]++;//countT++;
//					else checklist[j]++;
					printf("temp : %d\n", checklist[j]);
				}
			}
			printf("%d %d\n", countT, countF);
			printf("Round %d\n", num);
			if(countT >= length) printf("You win.\n");
			else if(countT < length && countF >= 7) printf("You chickened out.\n");
			else if(countT < length && countF >= 7) printf("You lose.\n");
			
		}
	}
	
	return 0;
}
