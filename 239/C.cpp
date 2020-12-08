#include <stdio.h>
#include <string.h>
int main(){
	
	int number;
	char sheep[100005];
	scanf("%d", &number);
	int white;
	int black;
	int length;
	for(int i=0; i<number; i++){
		scanf("%s", &sheep);
		length = strlen(sheep);
		for(int j=0; j<length; j++){
			white =0;
			black =0;
			if(sheep[j] == 'W'){
				white++;
				if(white == 10){
					break;
				}
			}
			else if(sheep[j] == 'B'){
				black++;
				if(black % 2 ==0){
					//kalau misal white = 0
					if(white == 0){
						white = 0;
					}
					else{
						white--;
					}
					//BB = WHITE MASIH 0
					//BB == WHITE MASIH 0
					//WX8 = jo
					
					//WWBWWBWWWWBWWBWBBW
					//W = 9
					//B = 0

				}
			}
		}
			if(white == 10 || white > 10){
				printf("Case #%d: Jojo fall asleep\n", i+1);
			}
			else if(white < 10){
				printf("Case #%d: Jojo stayed awake\n", i+1);
			}
		
	}
	return 0;
}
