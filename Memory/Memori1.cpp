#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Data{
	int level;
	char name[5];
	char nameLoL[5];
	int scoreLoL;
	char nameCloseEnough[5];
	int scoreCloseEnough;
	char nameGGWP[5];
	int scoreGGWP;
	int score;
}data[100];

char TrackGGWP[8][9] 		  = {{'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}};
char jawabanGGWP[8][9] 		  = {{'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}, {'-','-','-','-','-','-','-','-'}};
char TrackCloseEnough[4][5]   = {{'-','-','-','-'},                 {'-','-','-','-'},                 {'-','-','-','-'},                 {'-','-','-','-'}};
char jawabanCloseEnough[4][5] = {{'-','-','-','-'},                 {'-','-','-','-'},                 {'-','-','-','-'},                 {'-','-','-','-'}};
char TrackLoL[2][3]           = {{'-','-'},                         {'-','-'}};
char jawabanLoL[2][3]         = {{'-','-'},                         {'-','-'}};   
    
//char TrackGGWP[8][8] 		  = {{'A','A','B','B','C','C','D','D'},           {'E','E','F','F','G','G','H','H'},     {'I','I','J','J','K','K','L','L'},     {'M','M','N','N','O','O','P','P'},     {'Q','Q','R','R','S','S','T','T'},     {'U','U','V','V','W','W','X','X'},     {'Y','Y','Z','Z','1','1','2','2'},     {'3','3','4','4','5','5','6','6'}};
//char jawabanGGWP[9][9] 		  = {{'#','1','2','3','4','5','6','7','8'},       {'1','-','-','-','-','-','-','-','-'}, {'2','-','-','-','-','-','-','-','-'}, {'3','-','-','-','-','-','-','-','-'}, {'4','-','-','-','-','-','-','-','-'}, {'5','-','-','-','-','-','-','-','-'}, {'6','-','-','-','-','-','-','-','-'}, {'7','-','-','-','-','-','-','-','-'}, {'8','-','-','-','-','-','-','-','-'}};
//char TrackCloseEnough[4][4]   = {{'A','A','B','B'},                           {'C','C','D','D'},                     {'E','E','F','F'},                     {'G','G','H','H'}};
//char jawabanCloseEnough[5][5] = {{'#','1','2','3','4'},                       {'1','-','-','-','-'},                 {'2','-','-','-','-'},                 {'3','-','-','-','-'},                 {'4','-','-','-','-'}};
//char TrackLoL[2][2]           = {{'A','A'},                                   {'B','B'}};
//char jawabanLoL[3][3]         = {{'#','1','2'},                               {'1','-','-'},                         {'2','-','-'}};

void LoL(); void randomLoL(); void printTrackLoL(); void Track_LoL(); void resetLoL();
void CloseEnough(); void randomCloseEnough(); void printTrackCloseEnough(); void Track_CloseEnough();
void GGWP(); void randomGGWP(); void printTrackGGWP(); void Track_GGWP();
void choose();
void printData();
int pilih;
char tempJawaban1;
char tempJawaban2;
int x1, x2;
int y1, y2;
int index = 0;
int turn = 0;

int indexLoL = 0, indexCloseEnough = 0, indexGGWP = 0;

void judul(){
	printf("  __  __  U _____ u  __  __    U  ___ u   ____     __   __\n");
	printf("U|\' \\/ \'|u\\| ___\"|/U|\' \\/ \'|u   \\/\"_ \\/U |  _\"\\ u  \\ \\ / /\n");
	printf("\\| |\\/| |/ |  _|\"  \\| |\\/| |/   | | | | \\| |_) |/   \\ V /\"\n");
	printf(" | |  | |  | |___   | |  | |.-,_| |_| |  |  _ <    U_|\"|_u\n");
	printf(" |_|  |_|  |_____|  |_|  |_| \\_)-\\___/   |_| \\_\\     |_|\n");
	printf("<<,-,,-.   <<   >> <<,-,,-.       \\\\     //   \\\\_.-,//|(_\n");
	printf(" (./  \\.) (__) (__) (./  \\.)     (__)   (__)  (__)\\_) (__)\n\n\n");
}

void scanData(){
	FILE *file = fopen("hall-of-fame.txt", "r");
	if(!file){
		printf("Error! Opening FIle");
		return;
	}
	while (!feof(file)){
		fscanf(file, "%d#%[^#]#%d\n", &data[index].level, &data[index].name, &data[index].score);
		if(data[index].level == 4){
			strcpy(data[indexLoL].nameLoL, data[index].name);
			data[indexLoL].scoreLoL = data[index].score;
			indexLoL++;
		}
		if(data[index].level == 16){
			strcpy(data[indexCloseEnough].nameCloseEnough, data[index].name);
			data[indexCloseEnough].scoreCloseEnough = data[index].score;
			indexCloseEnough++;
		}
		if(data[index].level == 64){
			strcpy(data[indexGGWP].nameGGWP, data[index].name);
			data[indexGGWP].scoreGGWP = data[index].score;
			indexGGWP++;
		}
		index++;
	}
	fclose;
}

void printData(){
	system("cls");
	printf("Hall of Fame - Easy\n");
	printf("==========================\n");
	for(int i=0; i<indexLoL-1; i++){
		for(int j = indexLoL-1; j>i; j--){
			if(data[j-1].scoreLoL > data[j].scoreLoL){
				char tempLoL[5];
				strcpy(tempLoL, data[j-1].nameLoL);
				strcpy(data[j-1].nameLoL, data[j].nameLoL);
				strcpy(data[j].nameLoL, tempLoL);
				int tempL0L = data[j-1].scoreLoL;
				data[j-1].scoreLoL = data[j].scoreLoL;
				data[j].scoreLoL = tempL0L;
			}
		}
	}
	for(int i=0; i<3; i++){
		printf("%d. %2s (%-4d)\n", i+1, data[i].nameLoL, data[i].scoreLoL);
	}
	printf("\nHall of Fame - Medium\n");
	printf("==========================\n");
	for(int i=0; i<indexCloseEnough; i++){
		for(int j = 1; j<indexCloseEnough-i; j++){
			if(data[j].scoreCloseEnough < data[j-1].scoreCloseEnough){
				char tempCloseEnough[5];
				strcpy(tempCloseEnough, data[j].nameCloseEnough);
				strcpy(data[j].nameCloseEnough, data[j-1].nameCloseEnough);
				strcpy(data[j-1].nameCloseEnough, tempCloseEnough);
				int tempCloseEnough1 = data[j].scoreCloseEnough;
				data[j].scoreCloseEnough = data[j-1].scoreCloseEnough;
				data[j-1].scoreCloseEnough = tempCloseEnough1;
			}
		}
	}
	for(int i=0; i<3; i++){
		printf("%d. %2s (%-4d)\n", i+1, data[i].nameCloseEnough, data[i].scoreCloseEnough);
	}
	printf("\nHall of Fame - Hard\n");
	printf("==========================\n");
	for(int i=0; i<indexGGWP; i++){
		for(int j = 1; j<indexGGWP-i; j++){
			if(data[j].scoreGGWP < data[j-1].scoreGGWP){
				char tempGGWP[5];
				strcpy(tempGGWP, data[j].nameGGWP);
				strcpy(data[j].nameGGWP, data[j-1].nameGGWP);
				strcpy(data[j-1].nameGGWP, tempGGWP);
				int tempGGWP1 = data[j].scoreGGWP;
				data[j].scoreGGWP = data[j-1].scoreGGWP;
				data[j-1].scoreGGWP = tempGGWP1;
			}
		}
	}
	for(int i=0; i<3; i++){
		printf("%d. %2s (%-4d)\n", i+1, data[i].nameGGWP, data[i].scoreGGWP);
	}
	printf("\nLet's 'PLAY' !!! (Press ENTER to continue...)");
	getchar();
	system("cls");
}
void exit(){
	printf("Thank You For Playing This Game :)\n");
	system("exit");
}
void mainMenu(){
	judul();
//	while(1){
		printf("Choose your difficulty level [0 to exit]:\n");
		printf("1) LoL\n");
		printf("2) Close Enough\n");
		printf("3) GGWP\n");
		printf(">> ");	
//		break;
//	}
	scanf("%d", &pilih); getchar();
//	system("cls");
	if(pilih > 3){
		system("cls");
		mainMenu();
	}
	switch(pilih){
		case 0:
			exit();
			break;
		case 1:
			resetLoL();
			randomLoL();
//			printTrackLoL();
//			Track_LoL();
			choose();
			LoL();
			break;
		case 2:
			randomCloseEnough();
//			printTrackCloseEnough();
//			Track_CloseEnough();
			choose();
			CloseEnough();
		break;
		case 3:
			randomGGWP();
//			printTrackGGWP();
//			Track_GGWP();
			choose();
			GGWP();
		break;
	}
}

void choose(){
	char choose;
	printf("Seriously??? [Y/N]: ");
	scanf("%c", &choose); getchar();
	if(choose != 'Y'){
		system("cls");
		mainMenu();
	}
	else{
		system("cls");
		printData();
		if(pilih == 1) LoL();
		else if(pilih == 2) CloseEnough();
//		else GGWP();
	}
}

//void randomLoL(){
//	for(int i=0; i<10; i++){
//		int a = rand() %2;
//		int b = rand() %2;
//		char temp = TrackLoL[a][b];
//		TrackLoL[a][b] = TrackLoL[b][a];
//		TrackLoL[b][a] = temp;
//	}
//}

void randomLoL(){
	char huruf = 'A';
	int a, b; int count2 = 0;
	do{
		int a = rand() % 2;
		int b = rand() % 2;
		if(TrackLoL[a][b] == '-'){
			TrackLoL[a][b] = huruf;
			count2++;
			if(count2 % 2 == 0 && count2 != 0) huruf++;
		}
	}while(count2 < 4);
}

void printTrackLoL(){
	printf(" # | 1 | 2 |\n");
	for(int j=0; j<2; j++){
		printf(" %d |", j+1);
		for(int k=0; k<2; k++){
			printf(" %c |", jawabanLoL[j][k]);
		}
		printf("\n");
	}
}

void Track_LoL(){
	for(int j=0; j<2; j++){
		for(int k=0; k<2; k++){
			printf("%c |", TrackLoL[j][k]);
		}
		printf("\n");
	}
}

void resetLoL(){
	for(int j=0; j<2; j++){
		for(int k=0; k<2; k++){
			jawabanLoL[j][k] = '-';
			TrackLoL[j][k] = '-';
//			memset(jawabanLoL[j],'-',2);
		}
	}
}

void LoL(){
//	resetLoL();
	int temp = 0;
	do{
		do{
			awal:
			do{
				printf("Turn = %d\n\n", turn);
				printTrackLoL();
				printf("Input tile-1 by row col: ");
				scanf("%d %d", &x1, &y1); getchar(); turn++;
				if(x1 < 1 || x1 > 2 || y1 < 1 || y1 > 2) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 < 1 || x1 > 2 && y1 < 1 || y1 > 2);
			if(temp != 0 && jawabanLoL[x1-1][y1-1] != '-'){
				printf("Bad Input: Tile has been opened!\n\n");
				printf("Press ENTER to re-input...");
				getchar();
				system("cls");
				goto awal;	
			}
			if(jawabanLoL[x1-1][y1-1] == '-'){
				jawabanLoL[x1-1][y1-1] = TrackLoL[x1-1][y1-1];
				tempJawaban1 = TrackLoL[x1-1][y1-1];
			}
			system("cls");
			printf("Turn = %d\n\n", turn);
			printTrackLoL();
			do{
				awal1:
					do{
						printf("Input tile-2 by row col: ");
						scanf("%d %d", &x2, &y2); getchar(); turn++;
						if(x2 < 1 || x2 > 2 || y2 < 1 || y2 > 2) printf("Bad Input: Tile has been opened!\n\n");
					}while(x2 < 1 || x2 > 2 || y2 < 1 || y2 > 2);
				if(temp != 0 && jawabanLoL[x2-1][y2-1] != '-'){
					printf("Bad Input: Tile has been opened!\n\n");
					printf("Press ENTER to re-input...");
					getchar();
					system("cls");
					printf("Turn = %d\n\n", turn);
					printTrackLoL();
					goto awal1;	
				}
				if(jawabanLoL[x2-1][y2-1] == '-'){
					jawabanLoL[x2-1][y2-1] = TrackLoL[x2-1][y2-1];
					tempJawaban2 = TrackLoL[x2-1][y2-1];
				}
				if(x1 == x2 && y1 == y2) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 == x2 && y1 == y2);
//			jawabanLoL[x2][y2] = TrackLoL[x2-1][y2-1];
//			tempJawaban2 = TrackLoL[x2-1][y2-1];
			system("cls");
			if(tempJawaban1 != tempJawaban2){
				printf("Turn: %d\n\n", turn);
				printTrackLoL();
				printf("\n\nNope!\n");
				printf("Press ENTER to continue...");
				getchar();
				jawabanLoL[x1-1][y1-1] = '-';
				jawabanLoL[x2-1][y2-1] = '-';
				system("cls");
			}
		}while(tempJawaban1 != tempJawaban2);
		system("cls");
		if(tempJawaban1 == tempJawaban2){
			printf("Turn: %d\n\n", turn);
			printTrackLoL();
			printf("\n\nYeah!\n");
			printf("Press ENTER to continue..."); getchar();
//			system("cls");
			temp++;
			if(temp == 2){
				char name[4];
				int length;
				do{
					printf("\n\nInput Your Name[3]: ");
					scanf("%s", data[indexLoL].nameLoL); getchar();
					data[indexLoL].scoreLoL = turn;
					length = strlen(data[indexLoL].nameLoL);
				}while(length > 3);
			printf("\n\nPress ENTER to continue..."); getchar();
			system("cls");
			}
			system("cls");
		}
	}while(temp != 2);
	indexLoL++;
	turn = 0;
//	resetLoL();
	mainMenu();
//	printTrackLoL();
}

//void randomCloseEnough(){
//	for(int i=0; i<250; i++){
//		int a = rand() %4;
//		int b = rand() %4;
//		int c = rand() %4;
//		int d = rand() %4;
//		char temp = TrackCloseEnough[a][b];
//		TrackCloseEnough[a][b] = TrackCloseEnough[c][d];
//		TrackCloseEnough[c][d] = temp;
//	}
//}

void randomCloseEnough(){
	char huruf = 'A';
	int a, b; int count2 = 0;
	do{
		int a = rand() % 4;
		int b = rand() % 4;
		if(TrackCloseEnough[a][b] == '-'){
			TrackCloseEnough[a][b] = huruf;
			count2++;
			if(count2 % 2 == 0 && count2 != 0) huruf++;
		}
	}while(count2 < 16);
}

void printTrackCloseEnough(){
	printf(" # | 1 | 2 | 3 | 4 |\n");
	for(int j=0; j<4; j++){
		printf(" %d |", j+1);
		for(int k=0; k<4; k++){
			printf(" %c |", jawabanCloseEnough[j][k]);
		}
		printf("\n");
	}
}

void Track_CloseEnough(){
//	randomCloseEnough();
	for(int j=0; j<4; j++){
		for(int k=0; k<4; k++){
			printf("%c |", TrackCloseEnough[j][k]);
//			printf("%c |", jawabanCloseEnough[j][k]);
		}
		printf("\n");
	}
}

void resetCloseEnough(){
	for(int j=0; j<4; j++){
		for(int k=0; k<4; k++){
			jawabanCloseEnough[j][k] = '-';
			TrackCloseEnough[j][k] = '-';
		}
	}
}
void CloseEnough(){
	int temp = 0;
	do{
		do{
			awal:
//			printf("Turn = %d\n\n", turn);
			do{
				printf("Turn = %d\n\n", turn);
				printTrackCloseEnough();
				printf("Input tile-1 by row col: ");
				scanf("%d %d", &x1, &y1); getchar(); turn++;
				if(x1 < 1 || x1 > 4 || y1 < 1 || y1 > 4) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 < 1 || x1 > 4 && y1 < 1 || y1 > 4);
			if(temp != 0 && jawabanCloseEnough[x1-1][y1-1] != '-'){
				printf("Bad Input: Tile has been opened!\n\n");
				printf("Press ENTER to re-input...");
				getchar();
				system("cls");
				goto awal;	
			}
			if(jawabanCloseEnough[x1-1][y1-1] == '-'){
				jawabanCloseEnough[x1-1][y1-1] = TrackCloseEnough[x1-1][y1-1];
				tempJawaban1 = TrackCloseEnough[x1-1][y1-1];
			}
			system("cls");
			printf("Turn = %d\n\n", turn);
			printTrackCloseEnough();
			do{
				awal1:
				do{
					printf("Input tile-2 by row col: ");
					scanf("%d %d", &x2, &y2); getchar(); turn++;
					if(x2 < 1 || x2 > 4 || y2 < 1 || y2 > 4) printf("Bad Input: Tile has been opened!\n\n");
				}while(x2 < 1 || x2 > 4 || y2 < 1 || y2 > 4);
				if(temp != 0 && jawabanCloseEnough[x2-1][y2-1] != '-'){
					printf("Bad Input: Tile has been opened!\n\n");
					printf("Press ENTER to re-input...");
					getchar();
					system("cls");
					printf("Turn = %d\n\n", turn);
					printTrackCloseEnough();
					goto awal1;	
				}
				if(jawabanCloseEnough[x2-1][y2-1] == '-'){
					jawabanCloseEnough[x2-1][y2-1] = TrackCloseEnough[x2-1][y2-1];
					tempJawaban2 = TrackCloseEnough[x2-1][y2-1];
				}
				if(x1 == x2 && y1 == y2) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 == x2 && y1 == y2);
			system("cls");
			if(tempJawaban1 != tempJawaban2){
				printf("Turn: %d\n\n", turn);
				printTrackCloseEnough();
				printf("\n\nNope!\n");
				printf("Press ENTER to continue...");
				getchar();
				jawabanCloseEnough[x1-1][y1-1] = '-';
				jawabanCloseEnough[x2-1][y2-1] = '-';
				system("cls");
			}
		}while(tempJawaban1 != tempJawaban2);
		system("cls");
		if(tempJawaban1 == tempJawaban2){
			printf("Turn: %d\n\n", turn);
			printTrackCloseEnough();
			printf("\n\nYeah!\n");
			printf("Press ENTER to continue..."); getchar();
//			system("cls");
			temp++;
			if(temp == 8){
				char name[4];
				int length;
				do{
					printf("\n\nInput Your Name[3]: ");
					scanf("%s", data[indexCloseEnough].nameCloseEnough); getchar();
					data[indexCloseEnough].scoreCloseEnough = turn;
					length = strlen(data[indexCloseEnough].nameCloseEnough);
				}while(length > 3);
			printf("\n\nPress ENTER to continue..."); getchar();
			system("cls");
			}
			system("cls");
		}
	}while(temp != 8);
	indexCloseEnough++;
	turn = 0;
	resetCloseEnough();
	mainMenu();
}
//void randomGGWP(){
//	for(int i=0; i<300; i++){
//		int a = rand() %8;
//		int b = rand() %8;
//		int c = rand() %8;
//		int d = rand() %8;
//		int e = rand() %8;
//		int f = rand() %8;
//		int g = rand() %8;
//		int h = rand() %8;
//		char temp = TrackGGWP[a][b];
//		TrackGGWP[a][b] = TrackGGWP[c][d];
//		TrackGGWP[c][d] = temp;
//		temp = TrackGGWP[e][f];
//		TrackGGWP[e][f] = TrackGGWP[g][h];
//		TrackGGWP[g][h] = temp;
//	}
//}

void randomGGWP(){
	char huruf = 'A';
	int a, b; int count2 = 0;
	do{
		int a = rand() % 8;
		int b = rand() % 8;
		if(TrackGGWP[a][b] == '-'){
			TrackGGWP[a][b] = huruf;
			count2++;
			if(count2 % 2 == 0 && count2 != 0) huruf++;
		}
		if(huruf > 'Z') huruf = '1';
	}while(count2 < 64);
}

void printTrackGGWP(){
	printf(" # | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |\n");
	for(int j=0; j<8; j++){
		printf(" %d |", j+1);
		for(int k=0; k<8; k++){
			printf(" %c |", jawabanGGWP[j][k]);
		}
		printf("\n");
	}
}

void Track_GGWP(){
	for(int j=0; j<8; j++){
		for(int k=0; k<8; k++){
			printf("%c |", TrackGGWP[j][k]);
		}
		printf("\n");
	}
}

void resetGGWP(){
	for(int j=0; j<8; j++){
		for(int k=0; k<8; k++){
			jawabanGGWP[j][k] = '-';
			TrackGGWP[j][k] = '-';
		}
	}
}
void GGWP(){
	int temp = 0;
	do{
		do{
			awal:
			do{
				printf("Turn = %d\n\n", turn);
				printTrackGGWP();
				printf("Input tile-1 by row col: ");
				scanf("%d %d", &x1, &y1); getchar(); turn++;
				if(x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 < 1 || x1 > 8 && y1 < 1 || y1 > 8);
			if(temp != 0 && jawabanGGWP[x1-1][y1-1] != '-'){
				printf("Bad Input: Tile has been opened!\n\n");
				printf("Press ENTER to re-input...");
				getchar();
				system("cls");
				goto awal;	
			}
			if(jawabanGGWP[x1-1][y1-1] == '-'){
				jawabanGGWP[x1-1][y1-1] = TrackGGWP[x1-1][y1-1];
				tempJawaban1 = TrackGGWP[x1-1][y1-1];
			}
			system("cls");
			printf("Turn = %d\n\n", turn);
			printTrackGGWP();
			do{
				awal1:
				do{
					printf("Input tile-2 by row col: ");
					scanf("%d %d", &x2, &y2); getchar(); turn++;
					if(x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) printf("Bad Input: Tile has been opened!\n\n");
				}while(x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8);
				if(temp != 0 && jawabanGGWP[x2-1][y2-1] != '-'){
					printf("Bad Input: Tile has been opened!\n\n");
					printf("Press ENTER to re-input...");
					getchar();
					system("cls");
					printf("Turn = %d\n\n", turn);
					printTrackGGWP();
					goto awal1;	
				}
				if(jawabanGGWP[x2-1][y2-1] == '-'){
					jawabanGGWP[x2-1][y2-1] = TrackGGWP[x2-1][y2-1];
					tempJawaban2 = TrackGGWP[x2-1][y2-1];
				}
				if(x1 == x2 && y1 == y2) printf("Bad Input: Tile has been opened!\n\n");
			}while(x1 == x2 && y1 == y2);
			system("cls");
			if(tempJawaban1 != tempJawaban2){
				printf("Turn: %d\n\n", turn);
				printTrackGGWP();
				printf("\n\nNope!\n");
				printf("Press ENTER to continue...");
				getchar();
				jawabanGGWP[x1-1][y1-1] = '-';
				jawabanGGWP[x2-1][y2-1] = '-';
				system("cls");
			}
		}while(tempJawaban1 != tempJawaban2);
		system("cls");
		if(tempJawaban1 == tempJawaban2){
			printf("Turn: %d\n\n", turn);
			printTrackGGWP();
			printf("\n\nYeah!\n");
			printf("Press ENTER to continue..."); getchar();
//			system("cls");
			temp++;
			if(temp == 32){
				char name[4];
				int length;
				do{
					printf("\n\nInput Your Name[3]: ");
					scanf("%s", data[indexGGWP].nameGGWP); getchar();
					data[indexGGWP].scoreGGWP = turn;
					length = strlen(data[indexGGWP].nameGGWP);
				}while(length > 3);
			printf("\n\nPress ENTER to continue..."); getchar();
			system("cls");
			}
			system("cls");
		}
	}while(temp != 32);
	indexGGWP++;
	turn = 0;
	resetGGWP();
	mainMenu();
}

int main(){
	srand(time(NULL));
//	printTrackLoL();
	scanData();
//	Track_LoL();
	mainMenu();
	
	return 0;
}
