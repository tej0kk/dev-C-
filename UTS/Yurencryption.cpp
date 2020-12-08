#include <stdio.h>
#include <string.h>
int main(){
	
	char word[1000];
	char dictionary[27][6];
	dictionary[0][6] = {'@'};
	dictionary[1][6] = {'8'};
	dictionary[2][6] = {'('};
	dictionary[3][6] = {'|)'};
	dictionary[4][6] = {'3'};
	dictionary[5][6] = {'|='};
	dictionary[6][6] = {'6'};
	dictionary[7][6] = {']-['};
	dictionary[8][6] = {'|'};
	dictionary[9][6] = {'_|'};
	dictionary[10][6] = {'|<'};
	dictionary[11][6] = {'|_'};
	dictionary[12][6] = {'[]\/[]'};
	dictionary[13][6] = {'[]\[]'};
	dictionary[14][6] = {'0'};
	dictionary[15][6] = {'|D'};
	dictionary[16][6] = {'()'};
	dictionary[17][6] = {'|Z'};
	dictionary[18][6] = {'$'};
	dictionary[19][6] = {' '};
	dictionary[20][6] = {'|_|'};
	dictionary[21][6] = {'\/'};
	dictionary[22][6] = {'\/\/'};
	dictionary[23][6] = {'}{'};
	dictionary[24][6] = {'/'};
	dictionary[25][6] = {'2'};
	gets(word);
	int length = strlen(word); 
	char tampung[length];
	for(int i = 0; i<length; i++){
		if(word[i] >= 'A' && word[i] <= 'Z')
		tampung[i-'A'];
		else if(word[i] == " ") continue;
		printf("%c ", tampung[i]);
	}
	
	
	return 0;
}
