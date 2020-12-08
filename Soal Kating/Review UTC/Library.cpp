#include <stdio.h>

int main(){
	
	int cases, number;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &number); getchar();
		int arr[number];
		for(int j=0; j<number; j++){
			scanf("%d", &arr[j]); getchar();
		}
		bool lili = 1; bool jojo = 1; bool bibi = 1;
		for(int k=1; k<number; k++){
			if(arr[k-1] > arr[k]) jojo = 0;
		}
		for(int k=1; k<number; k++){
			if(arr[k-1] < arr[k]) lili = 0;
		}
		if(jojo == 1)printf("Case #%d: Jojo\n", i+1);
		else if(lili == 1)printf("Case #%d: Lili\n", i+1);
		else printf("Case #%d: Bibi\n", i+1);
	}
	
	return 0;
}
