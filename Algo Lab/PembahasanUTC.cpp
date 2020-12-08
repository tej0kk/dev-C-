#include <stdio.h>
#include <string.h>

int main(){
	
	int ch;
	int countData = 0;
	int length;
	
	char listBrand[205][25];
	int listWeight[205];
	int listPrice[205];
	
	do{
		printf("NH Berbell\n");
		printf("1. Insert\n");
		printf("2. View\n");
		printf("3. Update\n");
		printf("4. Delete\n");
		printf("5. Exit\n");
		printf(">> ");
		scanf("%d", &ch); getchar();
		//selection
		switch(ch){
			case 1:
				if(countData = 200){
					printf("Storage is Full!\n"); 
					getchar();
				}
				else{
					char brand[25];
					int weight;
					int price;
					
					do{
						printf("Input brand[3-20 character]: ");
						scanf("%[^\n]", brand);getchar();
						length = strlen(brand);
					}while(length<3 || length>20);
					
					do{
						printf("Input weight[1-20]: ");
						scanf("%d", &weight); getchar();
					}while(weight <1 || weight >20 );
					
					do{
						printf("Input price[1000-2000000]: ");
						scanf("%d", &price); getchar();
					}while(price <1000 || price >2000000);
					
					strcpy(listBrand[countData], brand);
					listWeight[countData] = weight;
					listPrice[countData] = price;
					countData++;
					printf("SUccess Insert !"); 
					getchar();
				}
				
				break;
			case 2:
				if(countData == 0){
					printf("There is no barbel!");
					getchar();
				}
				else{
					printf("=========================\n");
					printf("|%5s|%25s|%4s|%13s|\n", "No", "Brand", "price");
					printf("=========================\n");
					for(int i=0; i<countData; i++){
						printf("|%5d|%25s|%4d|Rp.%-10d|\n", i+1, listBrand[i], listWeight[i], listPrice[i]);	
					}
					printf("=========================\n");
					getchar();
				}
				break;
			case 3:
				if(countData == 0){
					printf("There is no barbel!");
					getchar();
				}
				else{
					printf("=========================\n");
					printf("|%5s|%25s|%4s|%13s|\n", "No", "Brand", "price");
					printf("=========================\n");
					for(int i=0; i<countData; i++){
						printf("|%5d|%25s|%4d|Rp.%-10d|\n", i+1, listBrand[i], listWeight[i], listPrice[i]);	
					}
					printf("=========================\n");
				}
				break;
			case 4:
				break;
		}
	}while(ch!=5);
	
	return 0;
}
