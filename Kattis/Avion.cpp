#include <stdio.h>
#include <string.h>

struct Data1{
	char word1[13];
	char word2[13];
	char word3[13];
	char word4[13];
	char word5[13];
};

int main(){
	struct Data1 data[6];
	int angka[6] = {0};
	for(int i=1; i<=5; i++){
		scanf("%s", data[i].word1); getchar();
//		printf("%d", strstr(data[i].word1, "FBI"));
		if(strstr(data[i].word1, "FBI") != 0) angka[i] = i;
		scanf("%s", data[i].word2); getchar();
		if(strstr(data[i].word2, "FBI") != 0) angka[i] = i;
		scanf("%s", data[i].word3); getchar();
		if(strstr(data[i].word3, "FBI") != 0) angka[i] = i;
		scanf("%s", data[i].word4); getchar();
		if(strstr(data[i].word4, "FBI") != 0) angka[i] = i;
		scanf("%s", data[i].word5); getchar();
		if(strstr(data[i].word5, "FBI") != 0) angka[i] = i;
	}
	int count = 0;
	for(int j=1; j<=5; j++){
		if(angka[j] != 0)printf("%d ", j);
		else count++;
	}
	if(count == 5) printf("HE GOT AWAY!\n");
//	scanf("%s", data[0].word1);
//	scanf("%s", data[1].word2);
//	scanf("%s", data[2].word3);
//	scanf("%s", data[3].word4);
//	scanf("%s", data[4].word5);
	
	return 0;
}
