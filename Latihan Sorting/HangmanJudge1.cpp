#include <stdio.h>
#include <string.h>

int main(){
	int index = 0;
	while(1){
		int num;
		char key[55];
		char word[55];
		scanf("%d", &num); getchar();
		int count = 0; int count1 = 0; int count2 = 0;
		if(num == -1) break;
		else{
			index++;
			scanf("%s", key); getchar();
			scanf("%s", word); getchar();
			int LengthKey = strlen(key);
			int LengthWord = strlen(word);
			int checklist[LengthKey] = {0};
			int chec[LengthWord] = {0};
			for(int i=0; i<LengthKey; i++){
				for(int j=0; j<LengthWord; j++){
					if(word[j] == key[i]){
						chec[j]++;
						checklist[i]++;
//						printf("CHecklist %d: %d\n", i, checklist[i]);
						 
					}
					else{
						count1++;
//						printf("count 1: %d\n", count1);
					} 
						
					}
			}
			for(int k=0; k<LengthKey; k++){
				if(checklist[k] != 0) count++;
			}
			for(int j=0; j<LengthWord; j++){
				if(chec[j] != 0) count2++;
			}
			printf("count1: %d %d\n", count1, LengthWord-count2);
			count1 = count1 / LengthWord;//-(LengthWord-count2);
			printf("%d %d %d %d\n", count1, count, LengthKey, count2);
			printf("Round %d\n", index);
			if(count == LengthKey && count1 < 7) printf("You win.\n");
			else if(count != LengthKey && count1 >= 7) printf("You lose.\n");
			else if(count != LengthKey && count1 < 7) printf("You chickened out.\n");
//			else if(count )
		}
	}
	return 0;
}
