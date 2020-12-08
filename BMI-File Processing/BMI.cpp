#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct Data{
	char name[20];
	double height;
	int weight;
	double BMI;
	char clasifikasi[20];
}data[100];

int index = 0;
int choice;
void insertData();
void updateData();
void sortingData();
void createReport();
int exit();
void mainMenu();
void inputBMI();

void scanData(){
	FILE *file = fopen("data.txt", "r");
	if(!file){
		printf("Error! Opening FIle");
		return;
	}
//	while(fread(&data, sizeof(struct Data), 1, fptr)) printf("%[^\n] %.2lf %.2lf\n", data[1].name, data[1].height, data[1].weight);
	while (!feof(file)){
		fscanf(file, "%[^#]#%lf#%d\n", &data[index].name, &data[index].height, &data[index].weight);
		index++;
	}
//	printf("No Name Height Weight\n");
//	for(int i=0; i<index; i++){
//		printf("%d %s %.2lf %.2lf\n", i+1, data[i].name, data[i].height, data[i].weight);
//	}
//	printf("\n");
	fclose(file);
}

void printData(){
	printf("No Name\t\t\t\tHeight\t  Weight\n");
	for(int i=0; i<index; i++){
		printf("%d  %-17s \t\t%.2lf      %d\n", i+1, data[i].name, data[i].height, data[i].weight);
	}
	printf("\n");
}

void inputBMI(){
	FILE *file = fopen("report.txt", "w");
	int i = 0;
	fprintf(file,"No Name\t\t\t\tHeight\t\tWeight\n");
	while(i < index){
	fprintf(file,"%d  %-17s \t\t%.2lf     \t%s\n",i+1, data[i].name, data[i].BMI, data[i].clasifikasi);	
		i++;
	}
	fclose(file);
}

void insertData(){
	int length;
	printData();
	do{
		printf("Insert New Name[20]: ");
		scanf("%s", &data[index].name); getchar();
		length = strlen(data[index].name);
	}while(length > 20);
	do{
		printf("Insert New Height[1.00-2.00]: ");
		scanf("%lf", &data[index].height);getchar();
	}while(data[index].height < 1.00 || data[index].height > 2.00);
	do{
		printf("Insert New Weight[40-120]: ");
		scanf("%d", &data[index].weight);getchar();
	}while(data[index].weight < 40 || data[index].weight > 120);
	
	index++;
	printf("Your New Data Has Been Saved\n");
	printf("Press Any Key to Continue...");
	getchar();
	system("cls");
	mainMenu();
}
void updateData(){
	if(index == 0){
		printf("No Data Yet!!\n");
		printf("Press Any Key to Continue...");
		getchar();
		system("cls");
		mainMenu();
	}
	printData();
	printf("Insert Search Query [Name]: ");
	char updateName[20];
		int count = 0;
		int index1 = 0;
//	while(strcmp(updateName, data[i].name)==0){
		count = 1;
		scanf("%[^\n]", updateName); getchar();
		for(int i=0; i<index; i++){
			if(strcmp(updateName, data[i].name)==0){
				count = 1;
//				printf("%d %d\n", count, i);
				index1 = i;
				int length;
				do{
					printf("Insert New Name[20] : ");
					scanf("%s", &data[index1].name); getchar();
					length = strlen(data[index1].name);
				}while(length > 20);
				do{
					printf("Insert New Height[1.00-2.00]: ");
					scanf("%lf", &data[index1].height);getchar();
				}while(data[index1].height < 1.00 || data[index1].height > 2.00);
				do{
					printf("Insert New Weight[40-120]: ");
					scanf("%d", &data[index1].weight);getchar();		
				}while(data[index1].weight < 40 || data[index1].weight > 120);
				printf("Your Update has Been Succeed\n");
				printf("Press Any Key to Continue..");
				getchar();
				system("cls");
				mainMenu();
			}
			else count = 0;
		}
//	}
//	printf("%d\n", count);
	if(count == 0){
		printf("Your Query \"%s\" result nothing. Please use different query.\n", updateName);
		printf("Press Any key to Continue..");
		getchar();
		system("cls");
		updateData();	
	}	
}

void sortingData(){
	printData();
	char choose;
	do{
		printf("Choose by Name or Weight[N or W]: ");
		scanf("%c", &choose); getchar();
	}while(choose != 'N' && choose != 'W');
	if(choose == 'N'){
		for(int i=0; i<index-1; i++){
			for(int j=0; j<index-i-1; j++){
				if(strcmp(data[j].name, data[j+1].name) > 0){
					char temp1[20];
					int temp = 0;
					double temp2 = 0;
					strcpy(temp1, data[j].name);
					temp = data[j].weight;
					temp2 = data[j].height;
					strcpy(data[j].name, data[j+1].name);
					data[j].weight = data[j+1].weight;
					data[j].height = data[j+1].height;
					strcpy(data[j+1].name, temp1);
					data[j+1].weight = temp;
					data[j+1].height = temp2;
				}
			}
		}
	printData();
	printf("Your Data Has Been Sorted\n");
	printf("Press Any Key To Continue...");
	getchar();
	system("cls");
	mainMenu();
	}
	else if(choose == 'W'){
		for(int i=0; i<index-1; i++){
			for(int j=0; j<index-i-1; j++){
				if(data[j].weight < data[j+1].weight){
					int temp = 0;
					char temp1[20];
					double temp2 = 0;
					temp = data[j].weight;
					temp2 = data[j].height;
					strcpy(temp1, data[j].name);
					data[j].weight = data[j+1].weight;
					data[j].height = data[j+1].height;
					strcpy(data[j].name, data[j+1].name);
					data[j+1].weight = temp;
					data[j+1].height = temp2;
					strcpy(data[j+1].name, temp1);
				} 	
			}
		}
	printData();
	printf("Your Data Has Been Sorted\n");
	printf("Press Any Key To Continue...");
	getchar();
	system("cls");
	mainMenu();
	}
}

void createReport(){
	if(index == 0){
		printf("No Data Yet!!\n");
		printf("Press Any Key to Continue...");
		getchar();
		system("cls");
		mainMenu();
	}
	for(int i=0; i<index; i++){
		data[i].BMI = (double)data[i].weight / (pow(data[i].height,2));
		if(data[i].BMI < 18.5) strcpy(data[i].clasifikasi,"Underweight");
		else if(data[i].BMI >= 18.5 && data[i].BMI <= 24.9) strcpy(data[i].clasifikasi,"Normal weight");
		else if(data[i].BMI >= 25.0 && data[i].BMI <= 29.9) strcpy(data[i].clasifikasi,"Overweight");
		else if(data[i].BMI >=30.0) strcpy(data[i].clasifikasi,"Obese");
	}
	printf("No Name\t\t\t\tHeight\t    Weight\n");
	for(int i=0; i<index; i++){
		printf("%d  %-17s \t\t%.2lf       %s\n", i+1, data[i].name, data[i].BMI, data[i].clasifikasi);
	}
	inputBMI();
	
//	FILE *file = fopen("hasil.txt", "w");
//	int i = 0;
//	while(i < 8){
//		fprintf(file, "%s#%.2lf#%s\n", data[i].name, data[i].BMI, data[i].clasifikasi);	
//		i++;
//	}
//	fclose(file);
	
	printf("Your Report has been saved succesfully to \"report.txt\"!");
	getchar();
	system("cls");
	mainMenu();
}

int exit(){
	printf("Thank You for Using This Program\n");
	printf("Press Any Key to Exit..");
	getchar();
//	system("exit");
	return 0;
}

void mainMenu(){
//	scanData();
	printData();
	while(1){
		printf("Health and Fit Clinic\n");
		printf("=====================\n");
		printf("1 Insert Data\n");
		printf("2 Update Data\n");
		printf("3 Sorting Data\n");
		printf("4 Create BMI Report\n");
		printf("5 Exit\n");
		printf("Your choice: ");
	break;
	}
	scanf("%d", &choice); getchar();
	system("cls");
	if(choice > 5) mainMenu();
	
	switch(choice){
		case 1:
			insertData();
		break;
		
		case 2:
			updateData();
		break;
		
		case 3:
			sortingData();
		break;
		
		case 4:
			createReport();
		break;
		
		case 5:
			exit();
		break;
	}
}

int main(){
	scanData();
	mainMenu();
//	printf("No  Name/t/t/t Height Weight\n");
	return 0;
}
