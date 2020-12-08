#include <stdio.h>

int main(){
	
	int L, D, X;
	scanf("%d %d %d", &L, &D, &X);
	int N, M; int temp = 0;
	int arr[100];
	int index = 0;
	for(int i =L; i<=D; i++){
		while(i % 10 != 0){
			temp += (i%10);
			i/10; 
			printf("%d", temp);
		}
		if(temp == X){
			arr[index]= i;
			index++;
		}
	}
	
	return 0;
}
