#include <stdio.h>

int main(){
	
	int cases;
	char word[100005];
	int length;
	scanf("%d\n", &cases);
	
	char hasil = 0;
	for(int i=0; i<cases; i++){
		scanf("%s %d", &word, &length);
	for(int j=0; j<length; j++){
		if(word[j] >= 65 && word[j] <= 90){
		printf("Huruf Besar\n");
		}
		else if(word[j] >= 97 && word[j] <= 122){
		printf("Huruf Kecil\n");
		}
	}
	printf("Case #%d: %s\n", i+1, word);
}
	return 0;
}
