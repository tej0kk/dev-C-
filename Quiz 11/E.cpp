#include <stdio.h>

int main(){
	
	int cases; int N; 
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		int arr1[N];
		int arr2[N];
		for(int j=0; j<N; j++){
			scanf("%d", &arr1[j]);
		}
		for(int j=0; j<N; j++){
			scanf("%d", &arr2[j]);
		}
		int kursi = N;
		int max = 0;
		do{
			int count = 0;
			int temp = arr2[0];
			for(int j=1; j<=N; j++){
					if(j == N) arr2[j] = temp; 
					arr2[j-1] = arr2[j];
					if(arr2[j-1] > arr1[j-1]) count++;
			}
			if(max < count) max = count;
			count = 0;
			kursi--;
		}while(kursi != 0);
		printf("Case #%d: %d\n", i+1, max+N);
		
	}

	return 0;
}
