#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Data{
	int level;
	char name[5];
	int score;
}data[15];

struct Urutan{
	int i[2];
	int j[2];
}koordinat[35];

int turn = 0;
int index = 0;
void mainMenu();

int random(){
	koordinat[index].i[0] = rand() % 3 + 1;
	koordinat[index].j[0] = rand() % 3 + 1;
}
char trackL0L[3][12] = {"# | 1 | 2 |",
					    "1 | - | - |",
					    "2 | - | - |"};
					    
void trackLoL(){
	//printf tampilan Scoreboard
	printf("Let\'s \'PLAY\' !!! (Press Enter to continue...)");
	getchar();
	turn = 0;
	do{		    
	printf("\nTurn: %d\n\n", turn);
	for(int i=0; i<3; i++){
		for(int j=0; j<11; j++){
			printf("%c", trackL0L[i][j]);
		}
		printf("\n");
	}
	printf("\nInput tile-1 to open [row column]: ");
//	break;
	}while(1);
}

char trackClose_enough[5][24] = {"# | 1 | 2 | 3 | 4 |",
					    		 "1 | - | - | - | - |",
					    		 "2 | - | - | - | - |",
								 "3 | - | - | - | - |",
								 "4 | - | - | - | - |"};
								
void trackCloseEnough(){
	//printf tampilan Scoreboard
	printf("Let\'s \'PLAY\' !!! (Press Enter to continue...)");
	getchar();
	turn = 0;
	do{		    
	printf("\nTurn: %d\n\n", turn);
	for(int i=0; i<5; i++){
		for(int j=0; j<24; j++){
			printf("%c", trackClose_enough[i][j]);
		}
		printf("\n");
	}
	printf("\nInput tile-1 to open [row column]: ");
//	break;
	}while(1);
}					    
char trackGgwp[9][64] = {"# | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |",
					     "1 | - | - | - | - | - | - | - | - |",
					     "2 | - | - | - | - | - | - | - | - |",
					   	 "3 | - | - | - | - | - | - | - | - |",
					 	 "4 | - | - | - | - | - | - | - | - |",
						 "5 | - | - | - | - | - | - | - | - |",
						 "6 | - | - | - | - | - | - | - | - |",
						 "7 | - | - | - | - | - | - | - | - |",
						 "8 | - | - | - | - | - | - | - | - |"};

void trackGGWP(){
	//printf tampilan Scoreboard
	printf("Let\'s \'PLAY\' !!! (Press Enter to continue...)");
	system("pause");
	turn = 0;
//	do{		    
	printf("\nTurn: %d\n\n", turn);
	for(int i=0; i<9; i++){
		for(int j=0; j<64; j++){
			printf("%c", trackGgwp[i][j]);
		}
		printf("\n");
	}
	printf("\nInput tile-1 to open [row column]: ");
//	break;
//	}while(1);
}		
				 					    
void judul(){
	printf("  __  __  U _____ u  __  __    U  ___ u   ____     __   __\n");
	printf("U|\' \\/ \'|u\\| ___\"|/U|\' \\/ \'|u   \\/\"_ \\/U |  _\"\\ u  \\ \\ / /\n");
	printf("\\| |\\/| |/ |  _|\"  \\| |\\/| |/   | | | | \\| |_) |/   \\ V /\"\n");
	printf(" | |  | |  | |___   | |  | |.-,_| |_| |  |  _ <    U_|\"|_u\n");
	printf(" |_|  |_|  |_____|  |_|  |_| \\_)-\\___/   |_| \\_\\     |_|\n");
	printf("<<,-,,-.   <<   >> <<,-,,-.       \\\\     //   \\\\_.-,//|(_\n");
	printf(" (./  \\.) (__) (__) (./  \\.)     (__)   (__)  (__)\\_) (__)\n\n");
}
void scanData(){
	FILE *file = fopen("hall-of-fame.txt", "r");
	if(!file){
		printf("Error! Opening FIle");
		return;
	}
	while (!feof(file)){
		fscanf(file, "%d#%[^#]#%d\n", &data[index].level, &data[index].name, &data[index].score);
		index++;
	}
	fclose;
}
void exit(){
	printf("Thanks For Playing This Game\n");
	system("exit");
}

void Lol(){
	char choose;
	printf("Seriously??? [Y/N]: ");
	scanf("%c", &choose); getchar();
	while(1){
		if(choose == 'Y'){
//			system("cls");
			trackLoL();
		}
		if(choose == 'N'){
			system("cls");
			mainMenu();
		}
		if(choose != 'Y' || choose != 'N'){
			system("cls");
			Lol();	
		}
	}
//	printf("%c", trackLoL[1][4]);
}

void CloseEnough(){
	char choose;
	printf("Seriously??? [Y/N]: ");
	scanf("%c", &choose); getchar();
	while(1){
		if(choose == 'Y'){
//			system("cls");
			trackCloseEnough();
		}
		if(choose == 'N'){
			system("cls");
			mainMenu();
		}
		if(choose != 'Y' || choose != 'N'){
			system("cls");
			CloseEnough();	
		}
	}
//	printf("%c", trackLoL[1][4]);
}

void GGWP(){
	char choose;
	printf("Seriously??? [Y/N]: ");
	scanf("%c", &choose); getchar();
	while(1){
		if(choose == 'Y'){
//			system("cls");
			trackGGWP();
		}
		if(choose == 'N'){
			system("cls");
			mainMenu();
		}
		if(choose != 'Y' || choose != 'N'){
			system("cls");
			GGWP();	
		}
	}
//	printf("%c", trackLoL[1][4]);
}
void mainMenu(){
	judul();
	int choose;
	while(1){
		printf("Choose your fifficulty level [0 to exit]:\n");
		printf("1) LoL\n");
		printf("2) Close Enough\n");
		printf("3) GGWP\n");
		printf(">> ");	
		break;
	}
	scanf("%d", &choose); getchar();
	system("cls");
	if(choose > 3) mainMenu();
	switch(choose){
		case 0:
			exit();
			break;
		case 1:
			Lol();
			break;
		case 2:
			CloseEnough();
		break;
		case 3:
			GGWP();
		break;
	}
}

int main(){
	mainMenu();
	
	return 0;
}
