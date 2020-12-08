#include <stdio.h>
#include <string.h>

int main(){
	
	int cases;
	char word[505];
	scanf("%d", &cases);
	//looping cases
	for(int i=0; i<cases; i++){
		int answer = 0;
		//baca inputan
		scanf("%s", &word);
		//ukur length
		int length;
		length = strlen(word);
		//looping buat cek
		for(int j=0, k=length-1; j<length, k>=0; j++, k--){
			if(word[j] == word[k]){
				answer = 1;
			}
			else{
				answer = 0;
				break;
			}
		}
		if(answer == 1){
			printf("Case #%d: Yay, it's a palindrome\n", i+1);
		}
		else{
			printf("Case #%d: Nah, it's not a palindrome\n", i+1);
		}
	}
	
	return 0;
}
