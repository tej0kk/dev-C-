#include <stdio.h>

int main(){
	
	int element, queries;
	scanf("%d %d", &element, &queries); getchar();
	int arr[element];
	int number;
	int count[queries] = {0};int temp = 0;
	for(int i=0; i<element; i++){
		scanf("%d", &arr[i]); getchar();
//		printf("%d", arr[i]);/
	}//printf("\n");
	
	for(int j=0; j<queries; j++){
		scanf("%d", &number); getchar();
		for(int k=0; k<element; k++){
			if(number == arr[k]){
			count[j] = 1;		
			}
		}
	}
		
//	int count[queries] = {0};
//	for(int i=0; i<element; i++){
//		for(int j=0; j<queries; j++){
//			if(number[j] == arr[i]){
//			count[j] == 1;	
//			}
//			else continue;
//		}
//	}
	
	for(int i=0; i<queries; i++){
//		printf("%d", count[i]);
		if(count[i] != 0){
			temp++;
		}
	}
	printf("%d\n", temp);
	return 0;
}
