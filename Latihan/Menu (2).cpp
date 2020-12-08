#include <stdio.h>
#include <string.h>

int main(){
	int input;
	char name[100];
	int tanggal, bulan, tahun; char kar1; char kar2;
	int count = 0;
	int length;
	char hasil[4] = {0};
	int validity = 1;
	
		
	do{
		
		printf("Welcome to Unique Code Generator: \n\n\n\n\n");
		printf("1. Generate Unique Code\n");
		printf("2. Exit Program\n");
		do{
			printf("Choose : ");
			scanf("%d", &input); fflush(stdin);
			if(input < 1 && input >2 ) printf("Invalid input, please try again\n");
		}while ( input<1 && input>2);
		
		switch(input){
			case 1:	
				do{
				printf("Please input your name [must be 2 words] : ");
				gets(name); fflush(stdin);
				length = strlen(name);
				for(int i=0; i<length; i++){
//					if(name[i]>= 'a' && name[i] <= 'z' &&  name[i+1] != 32){
//						break;
////						gets(name); fflush(stdin);
//					}
					if((name[i] >= 'a' && name[i] <= 'z') && name[i+1] == 32  && (name[i+2] >= 'a' && name[i+2] <= 'z')){
						hasil[0] = name[0];
						hasil[1] = name[i+2];
						count = 1;
					}
					else if((name[i] >= 'A' && name[i] <= 'Z') && name[i+1] == 32  && (name[i+2] >= 'A' && name[i+2] <= 'Z')){
						hasil[0] = name[0];
						hasil[1] = name[i+2];
						count = 1;
					}
					else if((name[i] >= 'A' && name[i] <= 'Z') && name[i+1] == 32  && (name[i+2] >= 'a' && name[i+2] <= 'z')){
						hasil[0] = name[0];
						hasil[1] = name[i+2];
						count = 1;
					}
					else if((name[i] >= 'a' && name[i] <= 'z') && name[i+1] == 32  && (name[i+2] >= 'A' && name[i+2] <= 'Z')){
						hasil[0] = name[0];
						hasil[1] = name[i+2];
						count = 1;
					}
				}
				}while(count == 0);
				
//				printf("\n");
//				printf("Please input your birthday [dd/mm/yyyy] : ");
				
				do{
				validity = 1;
					printf("Please input your birthday [dd/mm/yyyy] : ");
					scanf("%d%c%d%c%d", &tanggal, &kar1, &bulan, &kar2, &tahun); fflush(stdin);
					if(kar1 != '/' || kar2 != '/'){
						printf("Invalid format [must be dd/mm/yyyy]\n");
//						printf("Please input your birthday [dd/mm/yyyy] : ");
//						scanf("%d%c%d%c%d", &tanggal, &kar1, &bulan, &kar2, &tahun); getchar();
						validity = 0;
					}
					if(tanggal < 1 || tanggal > 30){
						printf("Date must be between 1 and 30\n");
//						printf("Please input your birthday [dd/mm/yyyy] : ");
//						scanf("%d%c%d%c%d", &tanggal, &kar1, &bulan, &kar2, &tahun); getchar();
						validity = 0;
					}
					if(bulan < 1 || bulan > 12){
						printf("Month must be between 1 and 12\n");
//						printf("Please input your birthday [dd/mm/yyyy] : ");
//						scanf("%d%c%d%c%d", &tanggal, &kar1, &bulan, &kar2, &tahun); getchar();
						validity = 0;
					}
					if(tahun <1990 || tahun >2016){
						printf("Year must be between 1990 and 2016\n");
//						printf("Please input your birthday [dd/mm/yyyy] : ");
//						scanf("%d%c%d%c%d", &tanggal, &kar1, &bulan, &kar2, &tahun); getchar();
						validity = 0;
					}
				}while(validity == 0);
				
				if( tanggal<10 && bulan<10){
					printf("Your Unique Code is : %2s0%d0%d%d\n", hasil, tanggal,bulan,tahun);
				}
				else if( tanggal<10){
					printf("Your Unique Code is : %2s0%d%d%d\n", hasil, tanggal,bulan,tahun);
				}
				else if(bulan<10){
					printf("Your Unique Code is : %2s%d0%d%d\n", hasil, tanggal,bulan,tahun);
				}
				else{
					printf("Your Unique Code is : %2s%d%d%d\n", hasil, tanggal,bulan,tahun);				
				}
			break;
//			}while(1);
				case 2:
				printf("Thank you for using this program\n");
				return 0;
		}
	}while(1);
}

