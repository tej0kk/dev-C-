#include <stdio.h>

int main(){
	
	int cases, digit;
	char number[120];
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %s", &digit, number);
		if(number[digit-1] == '1' && number[digit-2] == '1' || number[digit-1] == '2' && number[digit-2] == '1' || number[digit-1] == '3' && number[digit-2] == '1') printf("Case #%d: %sth\n",i+1, number);
		else if(number[digit-1] == '1' && number[digit-2] != '1') printf("Case #%d: %sst\n",i+1, number);
		else if(number[digit-1] == '2' && number[digit-2] != '1') printf("Case #%d: %snd\n",i+1, number);
		else if(number[digit-1] == '3' && number[digit-2] != '1') printf("Case #%d: %srd\n",i+1, number);
		else printf("Case #%d: %sth\n",i+1, number);
	}
	return 0;
}
