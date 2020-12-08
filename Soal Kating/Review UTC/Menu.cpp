#include <stdio.h>

int main(){
	
	int menu, query;int quess, count;
	scanf("%d %d", &menu, &query);
	int price[menu];
	for(int i=0; i<menu; i++){
		scanf("%d", &price[i]);
//		getchar();
	}
	
	for(int j=0; j<query; j++){
		scanf("%d", &quess);count = 0;
		for(int k=0; k<menu; k++){
				if(price[k] == quess){
				count++;
				}	
		}printf("%d\n", count);
	}
		
	return 0;
}
