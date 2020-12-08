#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	int number;
	char message[1005];
	
	scanf("%d", &cases);
	for(int i = 0; i<cases; i++){
		scanf("%d", &number);getchar();
		number %= 26;
//		printf("Case #%d: ", i+1);
		gets(message);
		int length;
		length = strlen(message);
		printf("Case #%d: ", i+1);
		for(int j=0; j<length; j++){
//			for(int k=0; k<number; k++){
			//kalo udah message huruf besar dan jika message j+number > 'Z' 
			if((message[j] >= 'A' && message[j] <= 'Z') && ((message[j]+number) > 'Z')){
				printf("%c", ((message[j] - 26)+number));
			}
			//kalo udah message huruf kecil dan jika message j+number > 'z' 
			else if((message[j] >= 'a' && message[j] <= 'z') && ((message[j]+number) > 'z')){
				printf("%c", ((message[j] - 26)+number));
			}
//			if((message[j]+number) > 'Z'){
//				printf("%c", ((message[j]+number)-26));
//			}
//			else if((message[j]+number) > 'z'){
//				printf("%c", ((message[j]+number)-26));
//			}
			//kalo message huruf besar
			else if(message[j] >=65 && message[j] <=90){
				printf("%c", message[j] + number);
			}
			//Kalo message huruf kecil
			else if((message[j] >=97) && (message[j] <=122)){
				printf("%c", message[j] + number);
			}
			//selain huruf
			else{
				printf("%c", message[j]);
			}
//			}
		}
			printf("\n");
	}
	
	return 0;
}
