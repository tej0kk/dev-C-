#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[105];
//	char dictionary[10];
	scanf("%d", &cases);
	getchar();
	for(int i=0; i<cases; i++){
		gets(word);
//		printf("Case #%d: ", i+1);
		int length;
		length = strlen(word);
//		dictionary[0] = {'L'};
//		dictionary[1] = {'0'};
//		dictionary[2] = {'V'};
//		dictionary[3] = {'3'};
		int count = 0;
		char jumlah[10]={0};
		for(int j=0; j<length; j++){
			if(word[j] == 'L'){
				jumlah[0] = word[j];
			}
			else if(word[j] == '0'){
				jumlah[1] = word[j];
			}
			else if(word[j] == 'V'){
				jumlah[2] = word[j];
			}
			else if(word[j] == '3'){
				jumlah[3] = word[j];
			}
//			printf("\n");
//			if((word[j] == dictionary[0]) && (word[j] == dictionary[1]) && (word[j] == dictionary[2]) && (word[j] == dictionary[3])){
//				count = 1;
//			}
//			else if(word[j] == dictionary[1]){
//				count = 2;
//			}
//			else if(word[j] == dictionary[2]){
//				count = 3;
//			}
//			else if(word[j] == dictionary[3]){
//				count = 4;
//			}
//			if(jumlah[10] == "L0V3"){
////			printf("Case #%d: Bibi <3\n", i+1);
//			printf("Bibi <3");
//			}
//			else{
////			printf("Case #%d: Not Bibi\n", i+1);
//			printf("Not Bibi");
		}
//		printf("\n");
//		printf("%s\n", jumlah);
		if(jumlah[0] == 'L' && jumlah[1] == '0' && jumlah[2] == 'V' && jumlah[3] == '3'){
			printf("Case #%d: Bibi <3\n", i+1);
		}
		else{
			printf("Case #%d: Not Bibi\n", i+1);
		}
//		if(count == 1){
//			printf("Case #%d: Bibi <3\n", i+1);
//		}
//		else if(count == 0){
//			printf("Case #%d: Not Bibi\n", i+1);
//		}
	}
	
	return 0;
}
