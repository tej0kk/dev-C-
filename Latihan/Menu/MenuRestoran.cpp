#include <stdio.h>
#include <string.h>
int main(){
	
	int choose;
	int table;
	int meja = 0;
	char makanan1[105];
	int makanan = 0;
	int quantity;
	int jumlahorder = 0;
	char waiterName[22];
	int nama = 0;
	do{		
		while(1){
			printf("Order queue:\n");
//			do{
//				
//			}while();
			printf("No order yet\n\n");
			printf("18-2 Restaurant\n");
			printf("===============\n");
			printf("1. New Order\n");
			printf("2. Serve Order\n");
			printf("3. Close Restaurant\n");
		break;
		}
		do{
			printf(">> ");
			scanf("%d", &choose); getchar();
//			if(choose <1 && choose >3) return 0
//			if(choose == 1) printf("OK");
		}while(choose < 1 ||  choose > 3);
		
		switch(choose){
			case 1:
			do{
				
//				do{
					printf("Input table no [1-5]: ");
					scanf("%d", &table); getchar();
//						do{
//							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
////							scanf("%s", &makanan1);	getchar();	
//							gets(makanan1);
//							makanan1[makanan]++;
//						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") && 0 || strcmp(makanan1, "Sate kuda") != 0);
//						meja++;
//				}while(table[meja] != 1 && table[meja] != 2 && table[meja] != 3 && table[meja] != 4 && table[meja] != 5);
				if(table == 1){
					do{
						do{
							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
//							scanf("%s", &makanan1);	getchar();	
							gets(makanan1);
						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") != 0 && strcmp(makanan1, "Sate kuda") != 0);
							printf("Input quantity[more or equal than 1]: ");
							scanf("%d", &quantity); getchar();
							if(quantity >= 1){
								printf("Input waiter name[5-20]: ");
								gets(waiterName);
								int length = strlen(waiterName);
								if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
							}
//						}
					}while(table != 1);
				}
				if(table == 2){
					do{
						do{
							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
//							scanf("%s", &makanan1);	getchar();	
							gets(makanan1);
						
						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") != 0 && strcmp(makanan1, "Sate kuda") != 0);
//						if(makanan1 == "Sate kambing" || makanan1 == "Sate kelinci" || makanan1 == "Sate kuda"){
							printf("Input quantity[more or equal than 1]: ");
							scanf("%d", &quantity); getchar();
							if(quantity >= 1){
								printf("Input waiter name[5-20]: ");
								gets(waiterName);
								int length = strlen(waiterName);
								if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
							}
					}while(table != 2);
				}
				if(table == 3){
					do{
						do{
							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
//							scanf("%s", &makanan1);	getchar();	
							gets(makanan1);
						
						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") != 0 && strcmp(makanan1, "Sate kuda") != 0);
//						if(makanan1 == "Sate kambing" || makanan1 == "Sate kelinci" || makanan1 == "Sate kuda"){
							printf("Input quantity[more or equal than 1]: ");
							scanf("%d", &quantity); getchar();
							if(quantity >= 1){
								printf("Input waiter name[5-20]: ");
								gets(waiterName);
								int length = strlen(waiterName);
								if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
							}
					}while(table != 3);
				}
				if(table == 4){
					do{
						do{
							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
//							scanf("%s", &makanan1);	getchar();	
							gets(makanan1);
						
						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") != 0 && strcmp(makanan1, "Sate kuda") != 0);
//						if(makanan1 == "Sate kambing" || makanan1 == "Sate kelinci" || makanan1 == "Sate kuda"){
							printf("Input quantity[more or equal than 1]: ");
							scanf("%d", &quantity); getchar();
							if(quantity >= 1){
								printf("Input waiter name[5-20]: ");
								gets(waiterName);
								int length = strlen(waiterName);
								if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
							}
					}while(table != 4);
				}
				if(table == 5){
					do{
						do{
							printf("Input food name[Sate kambing | Sate Kelinci | Sate kuda]: ");
//							scanf("%s", &makanan1);	getchar();	
							gets(makanan1);
						
						}while(strcmp(makanan1, "Sate kambing") != 0  && strcmp(makanan1, "Sate kelinci") != 0 && strcmp(makanan1, "Sate kuda") != 0);
//						if(makanan1 == "Sate kambing" || makanan1 == "Sate kelinci" || makanan1 == "Sate kuda"){
							printf("Input quantity[more or equal than 1]: ");
							scanf("%d", &quantity); getchar();
							if(quantity >= 1){
								printf("Input waiter name[5-20]: ");
								gets(waiterName);
								int length = strlen(waiterName);
								if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
							}
					}while(table != 5);
				}
			}while(choose != 1);
			break;
			
			case 2:
				printf("%sx%d on table %d has been served by %s\n", makanan1, quantity, table, waiterName);
			break;
			
			case 3:
				return 0;
		}
	}while(1);
}
