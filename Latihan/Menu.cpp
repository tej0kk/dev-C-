#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char input;
void menu();
void Insert();
void Delete();
void Update();
void Read();

void home(){
	system("cls");
	while(1){
	printf("Welcome to This Menu\n");
	printf("Menu			Back\n");
	input = getch();
	switch(input){
		case ' ':
			menu();
			break;
		case 27:
			home();
			break;
	}
//	if(input == 'X'){
//	menu();
//	} 
//	else{break;
//	}
	}
}

void menu(){
	system("cls");
	while(1){
		printf("I : Insert     U : Update\n");
		printf("D : Delete     R : Read\n");
		input = getch();
		switch(input){
			case 'I':
			case 'i':
				Insert();
				break;
			case 'D':
			case 'd':
				Delete();
				break;	
			case 'U':
			case 'u':
				Update();
				break;
			case 'R':
			case 'r':
				Read();
				break;
			case 27:
				home();
				break;
		}
	}
}

void Insert(){
	printf("Halo\n");
}

void Delete(){
	printf("Halo\n");
}

void Update(){
	printf("Halo\n");
}

void Read(){
	printf("Halo\n");
}


int main(){
	home();
	menu();
	
	
	
	return 0;
}
