#include <stdio.h>

int main(){
	int cases, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		printf("Case #%d: ", i+1);
		int arr[number];
		for(int j=0; j<number; j++){
			scanf("%d", &arr[j]);
		}
		for(int j=0; j<number; j++){
			if(arr[j] < arr[j+1]);
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j] = temp;
			printf("%d", arr);
		}
	}
}
