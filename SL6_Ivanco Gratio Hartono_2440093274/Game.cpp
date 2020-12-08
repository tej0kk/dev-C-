#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

char matriks[13][24] = {
	'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	'#',' ',' ',' ','#','#',' ','#','#','#','#','#','#','#','#','#','#',' ',' ',' ','#','#','#','#',
	'#',' ','#',' ','#',' ',' ','#','#','#','#',' ',' ',' ','#','#','#',' ','#',' ',' ','#','#','#',
	'#','#',' ',' ',' ',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ','#','#',' ',' ','#','#',
	'#','#',' ','#','#',' ','#',' ','#',' ','#',' ','#',' ','#',' ',' ','#','#','#','#',' ',' ','#',
	'#',' ',' ','#','#',' ','#','#',' ',' ','#',' ',' ','#',' ','#',' ','#','#',' ',' ',' ',' ','#',
	'#','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#','#',' ','#','#','#','#',' ','#','#','#','#',
	'#',' ','#','#','#','#','#',' ','#',' ','#','#',' ','#',' ','#','#',' ',' ',' ','#','#','#','#',
	'#',' ','#','#',' ','#',' ',' ','#',' ',' ','#','#',' ',' ',' ','#',' ','#',' ',' ',' ','#','#',
	'#',' ',' ',' ',' ','#',' ','#','#',' ','#','#','#','#','#',' ','#',' ','#','#','#',' ',' ','#',
	'#','#',' ','#',' ','#',' ','#','#','#',' ','#',' ','#',' ',' ','#',' ',' ',' ','#',' ',' ','#',
	'#','#',' ','#',' ',' ',' ','#','#','#',' ','#',' ','#','#',' ',' ',' ','#',' ',' ','#','#','#',
	'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	};
	
char controlP;
char player = 'Y';
int Prow = 1; int Pcol = 1;
int Prow_Last = 1; int Pcol_Last = 1;
char coin = '$';
int Crow = 1; int Ccol = 1;
void Pcoin();
int POINTS = 0; int MOVES = 0;
// player position
void pPosition(){
	srand(time(NULL));
	
	//1,1 posisi Y
	matriks[1][1] = player;
	for(int i=0; i<13; i++){
		for(int j=0; j<24; j++){
			printf("%c", matriks[i][j]);
		}
		printf("\n");
	}
	printf("MOVES	: %d\n", MOVES);
	printf("POINTS	: %d", POINTS);
}

void control(){

//	scanf("%c", &controlP);
	while(1){
		controlP = getch();
		if(matriks[Prow][Pcol] == matriks[Crow][Ccol]){
			POINTS++;
			Pcoin();
			break;
		}
		switch(controlP){
			case 'W':
			case 'w':
				Prow--;
				if(matriks[Prow][Pcol] == '#')Prow = Prow_Last;
				if(Prow < 1) Prow = 1;
				matriks[Prow][Pcol] = player;
				matriks[Prow_Last][Pcol_Last] = ' ';
				break;
			
			case 'A':
			case 'a':
				Pcol--;
				if(matriks[Prow][Pcol] == '#')Pcol = Pcol_Last;
				if(Pcol < 1) Pcol = 1;
				matriks[Prow][Pcol] = player;
				matriks[Prow_Last][Pcol_Last] = ' ';
				break;
				
			case 'S':
			case 's':
				Prow++;
				if(matriks[Prow][Pcol] == '#')Prow = Prow_Last;
				if(Prow > 11) Prow = 11;
				matriks[Prow][Pcol] = player;
				matriks[Prow_Last][Pcol_Last] = ' ';
				break;

			case 'D':
			case 'd':
				Pcol++;
				if(matriks[Prow][Pcol] == '#')Pcol = Pcol_Last;
				if(Pcol > 22) Pcol = 22;
				matriks[Prow][Pcol] = player;
				matriks[Prow_Last][Pcol_Last] = ' ';
				break;
				
//			case 'w':
//				Prow--;
//				if(matriks[Prow][Pcol] == '#')Prow = Prow_Last;
//				if(Prow < 1) Prow = 1;
//				matriks[Prow][Pcol] = player;
//				matriks[Prow_Last][Pcol_Last] = ' ';
//				break;
//			
//			case 'a':
//				Pcol--;
//				if(matriks[Prow][Pcol] == '#')Pcol = Pcol_Last;
//				if(Pcol < 1) Pcol = 1;
//				matriks[Prow][Pcol] = player;
//				matriks[Prow_Last][Pcol_Last] = ' ';
//				break;
//			case 's':
//				Prow++;
//				if(matriks[Prow][Pcol] == '#')Prow = Prow_Last;
//				if(Prow > 11) Prow = 11;
//				matriks[Prow][Pcol] = player;
//				matriks[Prow_Last][Pcol_Last] = ' ';
//				break;
//
//			case 'd':
//				Pcol++;
//				if(matriks[Prow][Pcol] == '#')Pcol = Pcol_Last;
//				if(Pcol > 22) Pcol = 22;
//				matriks[Prow][Pcol] = player;
//				matriks[Prow_Last][Pcol_Last] = ' ';
//				break;

		}
		if(Prow != Prow_Last || Pcol != Pcol_Last){
			MOVES++;
			break;//kalau dipencet baru esc lari ke func update
		}
	}
	Prow_Last = Prow;
	Pcol_Last = Pcol;
}

void Pcoin(){
	srand(time(NULL));
	while(1){
	Crow = rand() % 12;
	Ccol = rand() %23;
	if(matriks[Crow][Ccol] != '#'){
		matriks[Crow][Ccol] = coin;
		break;
	}
	}
}

void update(){
//	clrscr();
	system("cls");
	for(int i=0; i<13; i++){
		for(int j=0; j<24; j++){
			printf("%c", matriks[i][j]);
		}
		printf("\n");
	}
	printf("MOVES	: %d\n", MOVES);
	printf("POINTS	: %d", POINTS);
}

int main(){
	while(controlP != ' '){
		printf("PRESS SPACE to START\n");
		printf("NOTE: USE W,A,S,D FOR MOVES\n");
		controlP = getch();
	}
	Pcoin();
	pPosition();
	while(1){
	control();
	update();
	}
	return 0;
}
