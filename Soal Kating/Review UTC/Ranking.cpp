//#include <stdio.h>
//
//int main(){
//	int cases, number;
//	scanf("%d", &cases);
//	for(int i=0; i<cases; i++){
//		scanf("%d", &number);
//		printf("Case #%d: ", i+1);
//		int arr[number];
//		for(int j=0; j<number; j++){
//			scanf("%d", &arr[j]);
//		}
//		int temp = 0;
//		for(int j=0; j<number; j++){
//			for(int k=1; k<=number; k++){
//			if(arr[j] < arr[k]){
//			temp = arr[j];
//			arr[j] = arr[k];
//			arr[k] = temp;
//			}
//		}printf("%d", arr[j]);
//	}
//		
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>

int main(){
	
	int cases, number, count;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		int score[number];
		for(int j=0; j<number; j++){
			scanf("%d", &score[j]);
		}
		printf("Case #%d: ", i+1);
		for(int k=0; k<number; k++){
			count = 0;
			for(int l=0; l<number; l++){
				if(k != l && score[k] < score[l]) count++;
			}
			printf("%d ", 1+count);
		}
		printf("\n");
	}
	
	return 0;
}
