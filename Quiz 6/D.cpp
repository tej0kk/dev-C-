#include <stdio.h>

int main(){
	
	int cases;
	int number;
	char dictionary[26];
//	dictionary[1] = {'a'};
//	dictionary[2] = {'b'};
//	dictionary[3] = {'c'};
//	dictionary[4] = {'d'};
//	dictionary[5] = {'abcde'};
//	dictionary[6] = {'abcdef'};
//	dictionary[7] = {'abcdefg'};
//	dictionary[8] = {'abcdefgh'};
//	dictionary[9] = {'abcdefghi'};
//	dictionary[10] = {'abcdefghij'};
//	dictionary[11] = {'abcdefghijk'};
//	dictionary[12] = {'abcdefghijkl'};
//	dictionary[13] = {'abcdefghijklm'};
//	dictionary[14] = {'abcdefghijklmn'};
//	dictionary[15] = {'abcdefghijklmno'};
//	dictionary[16] = {'abcdefghijklmnop'};
//	dictionary[17] = {'abcdefghijklmnopq'};
//	dictionary[18] = {'abcdefghijklmnopqr'};
//	dictionary[19] = {'abcdefghijklmnopqrs'};
//	dictionary[20] = {'abcdefghijklmnopgrst'};
//	dictionary[21] = {'abcdefghijklmnopqrstu'};
//	dictionary[22] = {'abcdefghijklmnopqrstuv'};
//	dictionary[23] = {'abcdefghijklmnopqrstuvw'};
//	dictionary[24] = {'abcdefghijklmnopqrstuvwx'};
//	dictionary[25] = {'abcdefghijklmnopqrstuvwxy'};
//	dictionary[26] = {'abcdefghijklmnopqrstuvwxyz'};
	scanf("%d", &cases);
	char word[105] = {0};
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		printf("Case #%d: ", i+1);
			for(int j=97; j<=122; j++){
				if(number == 1){
					printf("%c\n", j);
					break;
				}
				else if (number == 2){
					printf("%c%c\n", j,j+1);
					break;
				}
				else if (number == 3){
					printf("%c%c%c\n", j,j+1,j+2);
					break;
				}
				else if (number == 4){
					printf("%c%c%c%c\n", j,j+1,j+2,j+3);
					break;
				}
				else if (number == 5){
					printf("%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4);
					break;
				}
				else if (number == 6){
					printf("%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5);
					break;
				}
				else if (number == 7){
					printf("%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6);
					break;
				}
				else if (number == 8){
					printf("%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7);
					break;
				}
				else if (number == 9){
					printf("%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8);
					break;
				}
				else if (number == 10){
					printf("%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9);
					break;
				}
				else if (number == 11){
					printf("%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10);
					break;
				}
				else if (number == 12){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11);
					break;
				}
				else if (number == 13){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12);
					break;
				}
				else if (number == 14){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13);
					break;
				}
				else if (number == 15){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14);
					break;
				}
				else if (number == 16){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15);
					break;
				}
				else if (number == 17){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16);
					break;
				}else if (number == 18){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17);
					break;
				}else if (number == 19){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18);
					break;
				}else if (number == 20){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19);
					break;
				}else if (number == 21){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20);
					break;
				}else if (number == 22){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20,j+21);
					break;
				}else if (number == 23){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20,j+21,j+22);
					break;
				}else if (number == 24){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20,j+21,j+22,j+23);
					break;
				}else if (number == 25){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20,j+21,j+22,j+23,j+24);
					break;
				}else if (number == 26){
					printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", j,j+1,j+2,j+3,j+4,j+5,j+6,j+7,j+8,j+9,j+10,j+11,j+12,j+13,j+14,j+15,j+16,j+17,j+18,j+19,j+20,j+21,j+22,j+23,j+24,j+25);
					break;
				}
			printf("\n");
			}
//		if(number == 3) printf("%c", dictionary[number]);
//		printf("\n");
	}
	
	return 0;
}
