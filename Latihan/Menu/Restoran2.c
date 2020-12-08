#include <stdio.h>
#include <string.h>

int main(){
    char copyNamaMakanan[100][100];
    char copywaitername[100][100];
    int choose;
    int makan = 0;
    char copyQty[10][10];
//    int qty = 0;
//    Variable Case 1
    int table[100] = {0};
    char NamaMakanan[15];
    int quantity[100] = {0};
    char waiterName[22];
    int length;
//  Variable Case 4
    int lengthMkn;
    do{
        while(1){
            printf("Order queue:\n");
            if(makan == 0) printf("No order yet:\n\n\n");
            else{
                    for(int i=0; i<makan; i++){
                        printf("%d. %sx%d on table %d by %s\n",i+1, copyNamaMakanan[i], quantity[i], table[i], copywaitername[i]);
                    }
//                printf("%d. %sx%d on table %d has been served by %s\n", Countdisplay, NamaMakanan, quantity, table, waiterName);
            }
            printf("Abal-Abal restaurant\n");
            printf("====================\n");
            printf("1. New Order\n");
            printf("2. View Order\n");
            printf("3. Update Order\n");
            printf("4. Delete Order\n");
            printf("5. Serve Order\n");
            break;
        }
        do{
            printf("Choose: ");
            scanf("%d", &choose);
        }while(choose <0 && choose > 7);

        switch(choose){
        case 1:
//            for(int i=1; i<6; i++){
            do{
                printf("Input table no[1-5]: ");
                scanf("%d", &table[makan]); getchar();
            }while(table[makan] < 0 || table[makan] > 6);
            do{
                printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
                gets(NamaMakanan);
                lengthMkn = strlen(NamaMakanan);
            }while(strcmp(NamaMakanan, "Sate kambing") != 0 && strcmp(NamaMakanan, "Sate kelinci") != 0 && strcmp(NamaMakanan, "Sate kuda") != 0);
                printf("Input quantity[more or equal than 1]: ");
                scanf("%d", &quantity[makan]); getchar();
                if(quantity > 0){
                    printf("Input waiter name[5-20]: ");
                    gets(waiterName);
					length = strlen(waiterName);
					if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
                }
                strcpy(copyNamaMakanan[makan], NamaMakanan);
                strcpy(copywaitername[makan], waiterName);
                // passing qty
//                strcpy(copyQty[makan], quantity);

                makan++;
//                qty++;
//                DisplayOrder[Countdisplay] = {"%d. %sx%d on table %d has been served by %s\n", Countdisplay, NamaMakanan, quantity, table, waiterName};
//                }
//                system("cls");
            break;

            case 2:
                if(length == 0){
                    printf("No Order Yet!!!!\n");
                }
                else{
                    for(int i=0; i<makan; i++){
                        printf("Your Order list:\n");
                        printf("%d. %sx%d on table %d by %s\n",i+1, copyNamaMakanan[i], quantity[i], table[i], copywaitername[i]);
                        printf("==================================================================\n");
                    }
                }
                break;
            case 3:
                if(length == 0){
                    printf("No Order Yet!!!!\n");
//                    system("cls");
                }
                else{
                    printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
            do{
//                printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
                gets(NamaMakanan);
            }while(strcmp(NamaMakanan, "Sate kambing") != 0 && strcmp(NamaMakanan, "Sate kelinci") != 0 && strcmp(NamaMakanan, "Sate kuda") != 0);
                printf("Input quantity[more or equal than 1]: ");
                scanf("%d", &quantity[makan-1]); getchar();
                if(quantity[makan-1] > 0){
                    printf("Input waiter name[5-20]: ");
                    gets(waiterName);
					int length = strlen(waiterName);
					if(length >= 5 && length <= 20) printf("\nsuccesfully update order !\n");
                }
                printf("==================================================================\n");
                strcpy(copyNamaMakanan[makan-1], NamaMakanan);
                strcpy(copywaitername[makan-1], waiterName);
                }
//                system("cls");
            break;
            case 4:
                if(length == 0) {
                    printf("No Order Yet!!!!\n");
//                    system("cls");
                }
                else{
                    lengthMkn = 0;
                    length = 0;
                    quantity[makan] = 0;
                    makan = 0;
                }
//                system("cls");
                break;
            case 5:
                if(length == 0){
                    printf("No Order Yet!!!!\n");
//                    system("cls");
                }
                else {
                    for(int i=0; i<makan; i++){
                        printf("%d. %sx%d on table %d has been served by %s\n",i+1, copyNamaMakanan[i], quantity[i], table[i], copywaitername[i]);
                    }
                    return 0;
                }
//                system("cls");
                break;
        }
    }while(1);


return 0;
}
