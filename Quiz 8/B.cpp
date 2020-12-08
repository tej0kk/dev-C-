#include <stdio.h>

int main(){
	
	int cases, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);	
		int arr;
		int checklist[100005] = {0};
		for(int j=0; j<number; j++){
			scanf("%d", &arr);
//			total += arr;
			checklist[arr]++;	
		}
		int max = 1;
		long long int temp = 0;
		for(int j=0; j<100002; j++){
//			printf("%d\n", checklist[j]);
			if(max < checklist[j]) max = checklist[j];
		}
		for(int k=0; k<100002; k++){
			if(max == checklist[k]) temp += k;
		}
		printf("Case #%d: %lld\n", i+1, temp);
	}

	return 0;
}
