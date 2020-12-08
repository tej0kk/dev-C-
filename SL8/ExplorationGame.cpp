#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//#include <time.h>

int choice;
char Exploretype[100];
int length = 0;
int LongHunting;
int furs; int meat; int firewood; int herbs;
int index = 0;

struct Data{
	char type[11];
	int time;
	char nama1[100];
	int hasil1;
	char nama2[100];
	int hasil2;
};
struct Data data[100];

void mainMenu();

int randomFurs(){
//	srand(time(NULL));
	furs = rand()%11;
//	furs /= 10;
	return furs;
}
int randomMeat(){
	meat = rand()%6;
	return meat;
}
int randomFirewood(){
//	srand(time(NULL));
	firewood = rand()%101;
//	furs /= 10;
	return firewood;
}
int randomHerbs(){
	herbs = rand()%6;
	return herbs;
}
void ExploreTheWoods(){
	if(index == 100){
		printf("Storage is Full\n");
		getchar();
		system("cls"); 
		mainMenu();	
	}
	printf("Explore the Woods!\n\n");

	do{
		printf("Choose exploration type[hunting|gathering]: ");
		gets(Exploretype);
		length = strlen(Exploretype);
	}while(strcmp(Exploretype, "hunting") != 0 && strcmp(Exploretype, "gathering") != 0);
	if(length == 7 || length == 9){
		do{
			printf("How long do you want to do %s? [1-3 hours]: ", Exploretype);
			scanf("%d", &LongHunting); getchar();
		}while(LongHunting <1 || LongHunting >3);
	}
	printf("\nYou explored the darkside of the woods!!\n");
	printf("You obtained:\n");
	if(length == 7){
		strcpy(data[index].type, Exploretype);
		data[index].time = LongHunting;
		strcpy(data[index].nama1, "piece(s) of fur");
		data[index].hasil1 = randomFurs();
		strcpy(data[index].nama2, "slice(s) of meat");
		data[index].hasil2 = randomMeat();
		printf("%d piece(s) of fur\n", data[index].hasil1);
		printf("%d slice(s) of meat\n\n", data[index].hasil2);
		printf("Press enter to continue..");
	}
	if(length == 9){
		strcpy(data[index].type, Exploretype);
		data[index].time = LongHunting;
		strcpy(data[index].nama2, "piece(s) of firewood");
		data[index].hasil1 = randomFirewood();
		strcpy(data[index].nama2, "pouch(s) of herbs");
		data[index].hasil2 = randomHerbs();
		printf("%d piece(S) OF firewood\n", data[index].hasil1);
		printf("%d pouch(S) OF herbs\n\n", data[index].hasil2);
		printf("Press enter to continue..");
	}
	index++;
	getchar();
	system("cls");
	mainMenu();
}

void ExplorationRecords(){
	if(index == 0){
		printf("No Exploration Yet!\n");
		printf("Press enter to continue..");
		getchar();
		system("cls"); 
		mainMenu();	
	}
	if(index == 100){
		printf("Storage is Full!\n");
		printf("Press enter to continue..");
		getchar();
		system("cls"); 
		mainMenu();	
	}
	printf("Exploration Records:\n\n");
	for(int i=0; i<index; i++){
		if(i <=8 )printf("Exploration number 00%d:\n", i+1);
		else if(i >=9 && i <= 98) printf("Exploration number 0%d:\n", i+1);
		else printf("Exploration number %d:\n", i+1);
		printf
		("You go %s and got: %d %s and %d %s\n\n", data[i].type, data[i].hasil1, data[i].nama1, data[i].hasil2, data[i].nama2);
	}
	printf("Press enter to continue..");
	getchar();
	system("cls"); 
	mainMenu();
}

void ClearExplorationRecord(){
	if(index == 0){
		printf("No Exploration Yet!\n");
		printf("Press enter to continue..");
		getchar();
		system("cls"); 
		mainMenu();
	}
	printf("Clear Explorarion Record\n\n");
	index = 0;
	printf("Exploration record has been cleared!\n\n");
	printf("Press enter to continue..");
	getchar();
	system("cls"); 
	mainMenu();
}

int Exit(){
	return 0;
}

void mainMenu()
{
	while(1)
	{
		printf("Exploration Game\n");
		printf("==========================+=\n");
		printf("1. Explore the Woods\n");
		printf("2. Exploration Records\n");
		printf("3. Clear Exploration Record\n");
		printf("4. Exit\n");
		printf("Choice: ");
		break;
	}
	scanf("%d", &choice); getchar();
	if(choice > 4){
		system("cls");
		mainMenu();
	}
	
			switch(choice){
				case 1:
					ExploreTheWoods();
					break;
				case 2:
					ExplorationRecords();
					break;
				case 3:
					ClearExplorationRecord();
					break;
				case 4:
					Exit();
				break;
		}
}

int main(){
	mainMenu();
	
	return 0;
}
