#include <stdio.h>

int main(){
	
	int cases;
	int length;
	scanf("%d\n", &cases);
	char hasil = 0;
	for(int i=0; i<cases; i++){
		char word[100005]; int length;
		scanf("%s %d", &word, &length);
		printf("Case #%d: %c", i+1, word[0]);
		//mulai dari 1 karena huruf di indeks 0 tetap
//		char tampung[100005];
	for(int j=1; j<length; j++){
		// jika kapital ubah lower case
//		if(word[j] >= 65 && word[j] <= 90){
			//jika indeks sebelum kapital dan indeks saat ini kapital, skrg jadi lowercase
			if((word[j-1] >= 65 && word[j-1] <= 90) && (word[j] >= 65 && word[j] <= 90)){
//				word[j] += 32;
				printf("%c", word[j]+32);
			}
			//jika indeks sebelum kapital dan indeks saat ini lowercase, skrg kapital
			else if((word[j-1] >= 65 && word[j-1] <= 90) && (word[j] >= 97 && word[j] <= 122)){
				printf("%c", word[j]-32);
			}
			else if(word[j-1] >= 65 && word[j-1] <= 90){
				printf("%c", word[j]);
			}
		
//		if(word[j] >= 97 && word[j] <= 122){
			//jika indeks sebelum lowercase dan  skrg lowercase, skrg lowercase
			else if((word[j-1] >= 97 && word[j-1] <= 122) && (word[j] >= 97 && word[j] <= 122)){
				printf("%c", word[j]);
			}
//			else if((word[j-1] >= 97 && word[j-1] <= 122) && (word[j] >= 97 && word[j] <= 122)){
//				printf("%c", word[j]);
//			}
			else if(word[j-1] >= 97 && word[j-1] <= 122){
				printf("%c", word[j]);
			}
			
		}
			printf("\n");
//			else if((word[j] >= 97 && word[j] <= 122)){
//				word[j] -= 32;
//			}
//		}
//			for(int k = j+1; k<length; k++){
//				if(word[k] >= 65 && word[k] <= 90 ){
//					word[k] += 32;
//			}
//				else{
//					word[k] -= 32;
//				}
//			}
//		}
//	}
//	printf("Case #%d: %s\n", i+1, word);
}
	return 0;
}
