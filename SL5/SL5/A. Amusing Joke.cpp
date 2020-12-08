#include <stdio.h>
#include <string.h>

int main(){
	
	char word1[105];
	char word2[105];
	char word3[105];
	char word12[105];
	scanf("%s\n%s\n%s", &word1, &word2, &word3);
	// gabungin word1 dengan word2 menggunakan strcat
	strcat(word1, word2);
	// copy dari variable word1 setelah di gabung masuk ke variable word12
	strcpy(word12, word1);

	// cari panjang lengthword12 dan lengthword3
	int lengthword12, lengthword3;
	lengthword12 = strlen(word12); lengthword3 = strlen(word3);

	// buat checklist
	int dictionary12[105] = {0};
	for(int i=0; i<lengthword12; i++){
		//masukin array yg di dalam word12 index ke i ke dalam dictionary12
			dictionary12[word12[i]]++;
//			printf("%d\n", dictionary12[word12[i]]);
	}
	
	int dictionary3[105] = {0};
	for(int i=0; i<lengthword3; i++){
		//masukin array yg di dalam word12 index ke i ke dalam dictionary12
			dictionary3[word3[i]]++;
//			printf("%d\n", dictionary3);
	}
	
	bool count = 1;
	for(int i=0; i<105; i++){
	if(dictionary12[i] != dictionary3[i]){
		count = 0; 
		break;
	}
	}
	if(count == 0){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	return 0;
}


