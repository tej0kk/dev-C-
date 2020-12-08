#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Question{
	char soal[100];
	char a[20];
	char b[20];
	char c[20];
	char d[20];
	char correct;
}question[20];

struct Scores{
	char name[15];
	int point;
}scores[100];
int index = 0;
int indexScore = 0;
void mainMenu();
void saveScores();
int exit();

int count1 = 14;
int randomIndex[14] = {0};
int dictionary[14][100] = {1000000, 500000, 250000, 150000, 75000, 50000, 25000, 15000, 10000, 7500, 5000, 3000, 2000, 1000, 500};
char stage[16][2];

void swap(struct Scores *a, struct Scores *b){
	struct Scores temp= *a;
	*a = *b;
	*b = temp;
}

int partition(int left, int right){
	int pivot = scores[right].point;
//	printf("%s\n", pivot);
	int split = left-1;
	
	for(int i=left; i<right; i++){
		if(scores[i].point > pivot){
			split++;
			swap(&scores[i], &scores[split]);
		}
	}
	swap(&scores[split+1], &scores[right]);
	return split+1;
}

void quickSort(int left, int right){
	if(left < right){
		int split = partition(left, right);
		quickSort(left, split-1);
		quickSort(split+1, right);
	}
}

void scanQuestion(){
	FILE *f = fopen("questions.txt", "r");
	if(!f){
		printf("Fail to load \"questions.txt\" file.\n");
		printf("Aborting the application");
		system("exit");
	}
	while (!feof(f)){
		fscanf(f, "%[^#]#%[^#]#%[^#]#%[^#]#%[^@]#%c\n", question[index].soal, question[index].a, question[index].b, question[index].c, question[index].d, &question[index].correct);
		if(question[index].correct == '1') question[index].correct = 'A';
		if(question[index].correct == '2') question[index].correct = 'B';
		if(question[index].correct == '3') question[index].correct = 'C';
		if(question[index].correct == '4') question[index].correct = 'D';
		index++;
	}
	fclose;
}

void scanScores(){
	FILE *f = fopen("scores.txt", "r");
	if(!f){
		printf("Fail to load \"scores.txt\" file.\n");
		printf("Press ENTER to continue...");
		getchar();
		mainMenu();
	}
	while (!feof(f)){
		fscanf(f, "%[^#]#%d\n", scores[indexScore].name, &scores[indexScore].point);
		indexScore++;
	}
	quickSort(0, indexScore-1);
	fclose;
}
//int randomIndex[15] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14"};

void random(){
	int angka = 0;
	int count = 0;
	do{
		int a = rand() % 15;
		if(randomIndex[a] == 0){
			randomIndex[a] = angka;
			count++;
			if(count % 1 == 0 && count != 0) angka++;
		}
	}while(count < 15);
}

void resetRandom(){
	for(int i=0; i<14; i++){
		randomIndex[i] = 0;
	}
}

void print(){
	random();
	for(int i=0; i<15; i++){
		printf("%d ", randomIndex[i]);
	}
}
void tampilanPlay(){
//	char dictionary[16][100] = {"[ ] $1000000	<- Safe Zone 3", "[ ] $ 500000", "[ ] $ 250000", "[ ] $ 150000", "[ ] $  75000", "[ ] $  50000	<- Safe Zone 2", "[ ] $  25000", "[ ] $  15000", "[ ] $  10000", "[ ] $   7500", "[ ] $   5000	<- Safe Zone 1", "[ ] $   3000", "[ ] $   2000", "[ ] $   1000", "[ ] $    500"};
//	char dictionary[16][100] = {"$1000000", "$ 500000", "$ 250000", "$ 150000", "$  75000", "$  50000", "$  25000", "$  15000", "$  10000", "$   7500", "$   5000", "$   3000", "$   2000", "$   1000", "$    500"};
//	char stage[16][2];
	for(int i=0; i<15; i++){
		if(i == count1) strcpy(stage[i], "x");
		else if(i < 14) strcpy(stage[i], " ");
	}
	
	
	for(int i=0; i<15; i++){
//		if(i == 14) printf("[%s]%s\n", stage, dictionary[i]);
		if(i == 0) printf("[%s] $%d	<- Safe Zone 3\n", stage[i], dictionary[i]);
		else if(i == 5) printf("[%s] $%d	<- Safe Zone 2\n", stage[i], dictionary[i]);
		else if(i == 10) printf("[%s] $%d	<- Safe Zone 1\n", stage[i], dictionary[i]);
		else printf("[%s] $%d\n", stage[i], dictionary[i]);
	}
}

void play(){
	system("cls");
	tampilanPlay();
	printf("\nGet ready for $%d question! ", dictionary[count1]);
	printf("Press ENTER to continue...");
	getchar();
	system("cls");
	char answer;
	for(int i=0; i<index; i++){
		awal:
		printf("%s\n", question[randomIndex[i]].soal);
		printf("|A: %s\t\t|", question[randomIndex[i]].a);
		printf("|B: %s\t\t|\n", question[randomIndex[i]].b);
		printf("|C: %s\t\t|", question[randomIndex[i]].c);
		printf("|D: %s\t\t|\n", question[randomIndex[i]].d);
		printf("Input 'E' to use 50:50\n");
		printf("Input 'F' to surrender\n");
		printf("Your answer: ");
		scanf("%c", &answer); getchar();
		char choose;
		printf("Lock your answer to %c? [Y/N]: ");
		scanf("%c", choose); getchar();
		if(choose == 'Y'){
//			if((strcmp(temp, question[randomIndex[i]].correct)) == 0){
			if(answer == question[randomIndex[i]].correct){
				printf("\n\nYou are right! You won $%d\n", dictionary[count1]);
				count1++;
				printf("Press ENTER to continue..."); 
				getchar();
				system("cls");
				tampilanPlay();
				printf("\nGet ready for $%d question! ", dictionary[count1]);
				printf("Press ENTER to continue...\n");
				getchar();
			}
			else{
				printf("Sorry, you got the answer wrong.\n");
				printf("Thank you for playing.\n");
				printf("You Got $0\n\n");
				int length;
				do{
					printf("Please input your nickname [5-10 characters]: ");
					scanf("%s", scores[indexScore].name); getchar();
					length = strlen(scores[indexScore].name);
				}while(length < 5 && length < 10);
				scores[indexScore].point = 0;
				printf("\n\nPress ENTER to continue..."); 
				getchar();
				system("cls");
				mainMenu();
				resetRandom();
			}
		}
//		else goto awal;
		
	}
}

void fame(){
	system("cls");
	printf("Hall of Fame\n");
	printf("=================================\n");
	for(int i=0; i<indexScore; i++){
		if(i % 9 != 0) printf("%00d. %-15s %-7d\n", i+1, scores[i].name, scores[i].point);
		else if(i % 99 != 0) printf("%0d. %-15s %-7d\n", i+1, scores[i].name, scores[i].point);
		else if(i % 99 == 0) printf("%d. %-15s %-7d\n", i+1, scores[i].name, scores[i].point);
	}
	printf("\nPress ENTER to continue...");
	getchar();
	system("cls");
	mainMenu();
}

void saveScores(){
	FILE *f = fopen("scores.txt", "w");
	for(int i=0; i<indexScore; i++){
		fprintf(f, "%s#%d\n", scores[i].name, scores[i].point);
	}
	fclose;
}

int exit(){
	saveScores();
	printf("\"scores.txt\" file has been updated.\n");
	printf("Thank you for playing!\n\n\n");
	printf("Press ENTER to exit...");
	getchar();
	return 0;
}

void mainMenu(){
	printf(" __  __  _  _  _  _                       _\n");
	printf("|  \\/  |(_)| || |(_)                     (_)\n");
	printf("| \\  / | _ | || | _   ___   _ __    __ _  _  _ __  ___\n");
	printf("| |\\/| || || || || | / _ \\ | '_ \\  / _` || || '__|/ _ \\\n");
	printf("| |  | || || || || || (_) || | | || (_| || || |  |  __/\n");
	printf("|_|  |_||_||_||_||_| \\___/ |_| |_| \\__,_||_||_|   \\___|\n");
	while(1){
		printf("MENU\n");
		printf("1. Let's Play!!\n");
		printf("2. Hall of Fame\n");
		printf("3. Exit and Save Hall of Fame\n");
		printf(">> ");
		break;
	}
	int choice;
	scanf("%d", &choice); getchar();
	if(choice < 1 && choice > 3) mainMenu();
	switch(choice){
		case 1:
			random();
			play();
		break;
		case 2:
			if(indexScore == 0){
				scanScores();
			}
			fame();
		break;
		case 3:
			exit();
		break;
	}
}

int main(){
	srand(time(NULL));
	scanQuestion();
//	scanScores();
	mainMenu();
//	print();
	return 0;
}
