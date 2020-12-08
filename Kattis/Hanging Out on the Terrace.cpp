#include <stdio.h>
#include <string.h>

int main(){
	int L, X;
	scanf("%d %d", &L, &X); getchar();
	char word[X][6]; int P[X]; int total = 0; int count = 0;
	for(int i=0; i<X; i++){
		scanf("%s %d", word[i], &P[i]);
		if(strcmp(word[i], "enter")==0){
			total += P[i];
			if(total > L){
				count++;
				total -= P[i];
			}
			else continue;
		}
		else if(strcmp(word[i], "leave")==0){
			total -= P[i];
		}
	}
	printf("%d\n", count);
	
	return 0;
}
