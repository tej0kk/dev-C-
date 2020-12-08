#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data{
	char name[25];
	char bloodType[5];
	char status[15];
}data[105];

void mainMenu();
void viewData();
void insertData();
void requestTransfusion();
int index = 0;
int CountA = 0;
int CountB = 0;
int CountO = 0;
int CountAB = 0;

void conquer(int start, int mid, int end){
	int leftSize = mid-start+1;
	int rightSize = end-mid;
	
	char leftArr1[leftSize][25];
	char rightArr1[rightSize][25];
	char leftArr2[leftSize][5];
	char rightArr2[rightSize][5];
	char leftArr3[leftSize][15];
	char rightArr3[rightSize][15];
	
	for(int i=0; i<leftSize; i++){
		strcpy(leftArr1[i], data[start+i].name);
		strcpy(leftArr2[i], data[start+i].bloodType);
		strcpy(leftArr3[i], data[start+i].status);
	}
	
	for(int i=0; i<rightSize; i++){
		strcpy(rightArr1[i], data[start+i].name);
		strcpy(rightArr2[i], data[start+i].bloodType);
		strcpy(rightArr3[i], data[start+i].status);
	}
	
	int leftIndex = 0;
	int rightIndex = 0;
	int arrIndex = start;
	
	while(leftIndex < leftSize && rightIndex < rightSize){
		if(strcmp(rightArr1[rightIndex], leftArr1[leftIndex]) < 0){
			int temp = arrIndex++;
			int tempRight = rightIndex++;
			strcpy(data[temp].name, rightArr1[tempRight]);
			strcpy(data[temp].bloodType, rightArr2[tempRight]);
			strcpy(data[temp].status, rightArr3[tempRight]);
		}
		else{
			int temp = arrIndex++;
			int tempLeft = leftIndex++;
			strcpy(data[temp].name, leftArr1[tempLeft]);
			strcpy(data[temp].bloodType, leftArr2[tempLeft]);
			strcpy(data[temp].status, leftArr3[tempLeft]);
		}
	}
	
	for(int i = leftIndex; i < leftSize; i++){
		int temp = arrIndex++;
		strcpy(data[temp].name, leftArr1[i]);
		strcpy(data[temp].bloodType, leftArr2[i]);
		strcpy(data[temp].status, leftArr3[i]);
	}
	for(int i = rightIndex; i < rightSize; i++){
		int temp = arrIndex++;
		strcpy(data[temp].name, rightArr1[i]);
		strcpy(data[temp].bloodType, rightArr2[i]);
		strcpy(data[temp].status, rightArr3[i]);
	}
}

void divide(int start, int end){
	int mid = (start+end)/2;
	if(start < end){
		divide(start, mid);
		divide(mid+1, end);
		
		conquer(start, mid, end);
	}
}

//void swap(struct Data *a, struct Data *b){
//	struct Data temp= *a;
//	*a = *b;
//	*b = temp;
//}
//
//int partition(int left, int right){
//	char pivot[25];
//	strcpy(pivot, data[right].name);
////	printf("%s\n", pivot);
//	int split = left-1;
//	
//	for(int i=left; i<right; i++){
//		if(strcmp(data[i].name, pivot) < 0){
//			split++;
//			swap(&data[i], &data[split]);
//		}
//	}
//	swap(&data[split+1], &data[right]);
//	return split+1;
//}
//
//void quickSort(int left, int right){
//	if(left < right){
//		int split = partition(left, right);
//		quickSort(left, split-1);
//		quickSort(split+1, right);
//	}
//}

void scanData(){
	FILE *f = fopen("data.dat", "r");
	while(!feof(f)){
		fscanf(f, "%[^#]#%[^#]#%[^\n]\n", data[index].name, data[index].bloodType, data[index].status);
		if(strcmp(data[index].bloodType, "A") == 0) CountA++;
		else if(strcmp(data[index].bloodType, "B") == 0) CountB++;
		else if(strcmp(data[index].bloodType, "O") == 0) CountO++;
		else if(strcmp(data[index].bloodType, "AB") == 0) CountAB++;
		index++;
	}
//	quickSort(0, index-1);
	divide(0, index-1);
}

void printData(){
//	divide(0, index-1);
//	quickSort(0, index-1);
	printf("-----------------------------------------------------------\n");
	printf("| No  | Donor Name\t    | Blood Type  |  Availability |\n");
	printf("+-----+---------------------+-------------+---------------+\n");
	for(int i=0; i<index; i++){
		printf("| %-3d | %-20s| %-11s | %-14s|\n", i+1, data[i].name, data[i].bloodType, data[i].status);
	}
	printf("-----------------------------------------------------------\n");
	printf("\n");
}

void printBloodCount(){
	printf("Number of available blood transfusion:\n");
	printf("- Blood type A : %d\n", CountA);
	printf("- Blood type B : %d\n", CountB);
	printf("- Blood type O : %d\n", CountO);
	printf("- Blood type AB : %d\n\n", CountAB);
	printf("Press enter to continue..."); getchar();
	system("cls");
	mainMenu();
}
void viewData(){
	system("cls");
//	quickSort(0, index-1);
//	printf("%d\n", index);
	printf("\nView Data <Sorted by Donor Name>\n\n");
	printData();
	printBloodCount();
}

void insertData(){
	system("cls");
	printf("Insert New Data\n\n");
	awal:
	printf("Donor Name [4-20 characters <alphabet only>]: ");
	scanf("%[^\n]", data[index].name); getchar();
	int length = strlen(data[index].name);
//	printf("%d\n", length);
	if(length < 4 || length > 20) goto awal;
	else if(length >= 4 && length <= 20){
		for(int i=0; i<length; i++){
			if(data[index].name[i] <= 57  && data[index].name[i] >= 48) goto awal;
		}
		awalBlood:
		printf("Donor Blood Type [A : B : O : AB ]: ");
		scanf("%s", data[index].bloodType); getchar();
		if(strcmp(data[index].bloodType, "A") != 0 && strcmp(data[index].bloodType, "B") != 0 && strcmp(data[index].bloodType, "O") != 0 && strcmp(data[index].bloodType, "AB") != 0) goto awalBlood;
		else{
			if(strcmp(data[index].bloodType, "A") == 0) CountA++;
			else if(strcmp(data[index].bloodType, "B") == 0) CountB++;
			else if(strcmp(data[index].bloodType, "O") == 0) CountO++;
			else if(strcmp(data[index].bloodType, "AB") == 0) CountAB++;
			strcpy(data[index].status, "Available");
//			printf("%d\n", index);
			index++;
//			printf("%d\n", index);
//			quickSort(0, index-1);
			divide(0, index-1);
			printf("Insert data success!\n\n\n");
			printf("Press enter to continue... "); getchar();
		}
	}
	system("cls");
	mainMenu();
}

void requestTransfusion(){
	system("cls");
	printf("Request Blood Transfusion\n\n");
	printData();
	awalBlood:
	char blood[3];
	printf("\nDonor Blood Type [A : B : O : AB ]: ");
	scanf("%[^\n]", blood); getchar();
//	gets(blood);
	if(strcmp(blood, "A") != 0 && strcmp(blood, "B") != 0 && strcmp(blood, "O") != 0 && strcmp(blood, "AB") != 0) goto awalBlood;
	else{
		for(int i=0; i<index; i++){
			if(strcmp(data[i].bloodType, blood) == 0 && strcmp(data[i].status, "Available") == 0){
				printf("\n\nBlood transfusion available found\n\n");
				printf("Donor Name   : %s\n", data[i].name);
				printf("Blood Type   : %s\n", data[i].bloodType);
				printf("Availability : %s\n\n", data[i].status);
				strcpy(data[i].status, "Unavailable");
				printf("Requesting blood transfusion process\n\n");
				break;
			}
			else if(strcmp(data[i].bloodType, blood) != 0 && i == index-1){
				printf("\nSorry, no blood transfusion available for that type of blood right now\n\n\n");
//				printf("Press any key to continue..."); getchar();
//				system("cls");
//				mainMenu();
				break;
			}
		}
		printf("Press enter to continue..."); getchar();
		system("cls");
		mainMenu();
	}
}

void saveData(){
	FILE *f = fopen("data.dat", "w");
	for(int i=0; i<index; i++){
		fprintf(f, "%s#%s#%s\n", data[i].name, data[i].bloodType, data[i].status);
	}
	fclose(f);
}

int exit(){
	saveData();
	system("cls");
	printf("Data successfully saved\n\n");
	printf("Thank You For Using This Program\n\n");
	printf("Press enter to exit..."); getchar();
	return 0;
}

//void printThanks(){
//	
//	printf("|%c%c%c%c%c|%c|_  __")
//}

void resetStatus(){
	FILE *f = fopen("data.dat", "r");
	for(int i=0; i<index; i++){
		if(strcmp(data[i].status, "Unavailable") == 0) strcpy(data[i].status, "Available");
	}
	fclose(f);
}

void mainMenu(){
//	resetStatus();
	while(1){
		printf("------------------------------\n");
		printf("| -------------------------- |\n");
		printf("| | Blood Bank Application  ||\n");
		printf("| -------------------------- |\n");
		printf("------------------------------\n\n");
		printf("1. View Data <Sorted by Donor Name>\n");
		printf("2. Insert New Data\n");
		printf("3. Request Blood Transfusion\n");
		printf("4. Save Data and Exit Application\n");
		printf("\nInput your choice: ");
		break;
	}
	int choice;
	scanf("%d", &choice); getchar();
	if(choice < 1 || choice > 4){
		system("cls");
		mainMenu();
	}
	
	switch(choice){
		case 1:
			viewData();
		break;
		case 2:
			insertData();
		break;
		case 3:
			requestTransfusion();
		break;
		case 4:
			exit();
//		saveData();
//		system("cls");
//		printf("Data successfully saved\n\n");
//		printf("Thank You For Using This Program\n\n");
//		printf("Press enter to exit..."); getchar();
//		system("exit");
		break;
	}	
}


int main(){
	scanData();
	mainMenu();
	
	return 0;
}
