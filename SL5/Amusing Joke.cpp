#include <stdio.h>
#include <string.h>

int main(){
	char word1[105];
	char word2[105];
	char word3[105];
	
	scanf("%s\n%s\n%s", &word1, &word2, &word3);
	//gabungin word1 dan word2 masuk ke word1
	strcat(word1,word2);
	//ukur panjang dari word gabungan dan word3
	int length1, length3;
	length1 = strlen(word1), length3 = strlen(word3);
	printf("%d %d\n", length1, length3);
	int box1[26] = {0}, box2[26] = {0};
	for(int i=0; i<length1; i++){ 
		if(word1[i] < 65 || word1[i] > 90){
			continue;
		}
		int temp = word1[i] - 65;
		box1[temp] += 1;
	}
	
	for(int i=0; i<length3; i++){
		int temp = word1[i] - 65;
		box2[temp] += 1;
	}
	
	bool check = true;
	for(int j=0; j<26; j++){
		if(box1[j] != box2[j]){
			check = false;
			break;
		}
	}
	if(check == true){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
