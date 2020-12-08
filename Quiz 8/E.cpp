#include <stdio.h>

int main(){
	
	int number;
	scanf("%d", &number);
	int arr[number];
	for(int i=0; i<number; i++){
		scanf("%d", &arr[i]);
	}
	// print dari atas dan cek baris = arr[number]
	for(int j=9; j>0; j--){
		for(int k=0; k<number; k++){
			if(j == arr[k]){
				printf("#");
			} 
			else printf(".");
		}
		
		printf("\n");
	}
	
		
	return 0;
}
