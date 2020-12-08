#include <stdio.h>
#include <string.h>

int main(){
	
	char input[105];
	char number=0;
	int length;
	scanf("%s", &input);
	length = strlen(input);
//	buat jadi wadah penampungan sementara saat melakukan pengurutan dan switching
	char temp = 0;
	char input1[50];
	int count=0;
	for(int i=0; i<length; i++){
		if(input[i] == '+'){
			continue;
		}
		else{
			if(input[i] >= '1' && input[i] <= '3'){
				number = input[i];
				input1[50] = number;
				printf("%c", number);
				}	
			}
			int lengthnum;
			lengthnum = strlen(input1);
			
		for(int j=0; j<lengthnum; j++){
			for(int k=j+1; j<lengthnum; j++){
			if(input1[j] > input1[k]){
				temp = input1[j];
				input1[j]=input1[k];
				input1[k] = temp;
//				printf("%c+", temp);
			}
			}
		}
	}
	return 0;
}
