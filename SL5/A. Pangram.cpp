#include <stdio.h>

int main(){
	
	int length;
	char pangram[105];
	int word[26]={0};
	
	scanf("%d\n", &length);
	scanf("%s", &pangram);
	for(int i=0; i<length; i++){
		if(pangram[i] == 'A' || pangram[i] == 'a'){
			word[1]++;
		}
		if(pangram[i] == 'B' || pangram[i] == 'b'){
			word[2]++;
		}
		if(pangram[i] == 'C' || pangram[i] == 'c'){
			word[3]++;
		}
		if(pangram[i] == 'D' || pangram[i] == 'd'){
			word[4]++;
		}
		if(pangram[i] == 'E' || pangram[i] == 'e'){
			word[5]++;
		}
		if(pangram[i] == 'F' || pangram[i] == 'f'){
			word[6]++;
		}
		if(pangram[i] == 'G' || pangram[i] == 'g'){
			word[7]++;
		}
		if(pangram[i] == 'H' || pangram[i] == 'h'){
			word[8]++;
		}
		if(pangram[i] == 'I' || pangram[i] == 'i'){
			word[9]++;
		}
		if(pangram[i] == 'J' || pangram[i] == 'j'){
			word[10]++;
		}
		if(pangram[i] == 'K' || pangram[i] == 'k'){
			word[11]++;
		}
		if(pangram[i] == 'L' || pangram[i] == 'l'){
			word[12]++;
		}
		if(pangram[i] == 'M' || pangram[i] == 'm'){
			word[13]++;
		}
		if(pangram[i] == 'N' || pangram[i] == 'n'){
			word[14]++;
		}
		if(pangram[i] == 'O' || pangram[i] == 'o'){
			word[15]++;
		}
		if(pangram[i] == 'P' || pangram[i] == 'p'){
			word[16]++;
		}
		if(pangram[i] == 'Q' || pangram[i] == 'q'){
			word[17]++;
		}
		if(pangram[i] == 'R' || pangram[i] == 'r'){
			word[18]++;
		}
		if(pangram[i] == 'S' || pangram[i] == 's'){
			word[19]++;
		}
		if(pangram[i] == 'T' || pangram[i] == 't'){
			word[20]++;
		}
		if(pangram[i] == 'U' || pangram[i] == 'u'){
			word[21]++;
		}
		if(pangram[i] == 'V' || pangram[i] == 'v'){
			word[22]++;
		}
		if(pangram[i] == 'W' || pangram[i] == 'w'){
			word[23]++;
		}
		if(pangram[i] == 'X' || pangram[i] == 'x'){
			word[24]++;
		}
		if(pangram[i] == 'Y' || pangram[i] == 'y'){
			word[25]++;
		}
		if(pangram[i] == 'Z' || pangram[i] == 'z'){
			word[26]++;
		}
	}
	if(word[1]>0 && word[2]>0 && word[3]>0 && word[4]>0 && word[5]>0 && word[6]>0 && word[7]>0 && word[8]>0 && word[9]>0 && word[10]>0 && word[11]>0 && word[12]>0 && word[13]>0 && word[14]>0 && word[15]>0 && word[16]>0 && word[17]>0 && word[18]>0 && word[19]>0 && word[20]>0 && word[21]>0 && word[22]>0 && word[23]>0 && word[24]>0 && word[25]>0 && word[26]>0 ){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
