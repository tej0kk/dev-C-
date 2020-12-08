#include <stdio.h>
#include <string.h>
int jumlah = 0;
int hitung(char *word, char *key, int startW, int lengthW, int lengthK, int startK){
	if(startK == lengthK) jumlah++;
	else if(startW == lengthW) return 0;
	else{
		for(int i=startW; i<lengthW; i++){
			if(key[startK] == word[i]){
//				printf("%c\n", key[startK]);
				hitung(word, key, i+1, lengthW, lengthK, startK+1);
			}
		}
	}
}

int main(){
	
	int cases; char word[25]; char key[10];
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%s", word); getchar();
		scanf("%s", key); getchar();
		int count = 0;
		int lengthW = strlen(word);
		int lengthK = strlen(key);
		printf("Case #%d: ", i+1);
		hitung(word, key, 0, lengthW, lengthK, 0);
		printf("%d\n", jumlah);
		jumlah = 0;
	}
	
	return 0;
}
