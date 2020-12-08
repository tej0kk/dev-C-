#include <stdio.h>

int main(){
	
	int cases;
	scanf("%d", &cases);
	int arr[cases];
	for(int i=0; i<cases; i++){
		scanf("%d", &arr[i]);
	}
	for(int j=0; j<cases; j++){
		for(int k=1; k<cases-j; k++){
//			if(arr[k] == arr[k-1]) continue;
			if(arr[k] < arr[k-1]){
				int temp = arr[k];
				arr[k] = arr[k-1];
				arr[k-1] = temp;
			}
		}
	}
	for(int i=0; i<cases; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
