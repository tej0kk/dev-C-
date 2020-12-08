#include <stdio.h>
#include <string.h>
int main(){
	
	int size, length; 
	int number, temp;
	scanf("%d", &size); getchar();
	for(int i=0; i<size; i++){
		scanf("%d", &number);
		while(number >= 10){
			temp = number % 10 + number / 10;
			number = temp;
		}
//		if(number < 10) printf("%d\n", number);
//		else{
//			do{
//				temp = 0;
//				while(number > 0){
//					temp += number % 10;
//					number /= 10;
//				}
//				number = temp;
//			}while(temp > 9);
			printf("%d\n", number);
		}
//	}
	return 0;
}
