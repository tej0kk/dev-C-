#include <stdio.h>

int main(){
	int cases, number;
	char flavour[100005];
	scanf("%d", &cases); getchar();
	int checklist[5] = {0};
	
	for(int i=0; i<cases; i++){
		scanf("%d", &number);getchar();
		for(int j=0; j<number; j++){
			scanf("%c", &flavour[j]);getchar();
		}
		for(int k=0; k<number; k++){
//			printf("%c", flavour[k]);
			if(flavour[k] == 'c') checklist[0]++;
			else if(flavour[k] == 's') checklist[1]++;
			else if(flavour[k] == 'v') checklist[2]++;
		}
		printf("%d\n", checklist[0]);printf("%d\n", checklist[1]);printf("%d\n", checklist[2]);
		int max = 0;
		for(int l=0; l<5; l++){
			if(max < checklist[l]){
				max = checklist[l];
			}
		}
//		printf("%d\n", max);
		printf("Case #%d:\n", i+1);
		if(max == checklist[0]) printf("chocolate\n");
		if(max == checklist[1]) printf("strawberry\n");
		if(max == checklist[2]) printf("vanilla\n");
//		printf("%d", max);
	}
	return 0;
}
