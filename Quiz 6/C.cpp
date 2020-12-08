#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[10005];
	scanf("%d", &cases);
	getchar();
	
	for(int i=0; i<cases; i++){
		scanf("%[^\n]", &word);
		getchar();
//		printf("Case #%d:\n", i+1);
		int length;
		length = strlen(word);
//		char dictionary[10005] = {0};
		int dictionary[10005] = {0};
		for(int j=0; j<length; j++){
//			char dictionary[word[j-'0']] = {0};
//			if((word[j] >= 'A' && word[j] <= 'Z') || (word[j] >= 'a' && word[j] <= 'z' )){
			if(word[j] >= 'A' && word[j] <= 'Z'){
				dictionary[word[j]-'A']++;
			}
			else if(word[j] >= 'a' && word[j] <= 'z'){
				dictionary[word[j]-'a']++;
			}
			else if(word[j] == ' '){
				continue;
			}
			//kalau dia angka 0-9 dikurang 21 agar masuk mulai dari index ke 28
			else{
				dictionary[word[j]-21]++;
			}
//			}
		}
		printf("Case #%d:\n", i+1);
		// looping buat print huruf
		for(int k=0; k<=26; k++){
			if(dictionary[k] != 0){
				printf("[%c] => %d\n", k+'A', dictionary[k]);
			}	
//			else if(dictionary[11] != 0){
//				continue;
//			}
		}
		//looping buat print angka
		for(int k=27; k<=36; k++){
			if(dictionary[k] != 0){
				printf("[%c] => %d\n", k+21, dictionary[k]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
