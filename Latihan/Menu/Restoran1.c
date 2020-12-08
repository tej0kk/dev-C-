#include <stdio.h>
#include <string.h>

int main(){
    int choose;
//    Variable Case 1
    int table = 0;
    char NamaMakanan[15];
    int quantity = 0;
    char waiterName[22];
    int length;
    int Countdisplay = 0;
    char DisplayOrder [Countdisplay][105];
//  Variable Case 4
    int lengthMkn;
    do{
        while(1){
            printf("Order queue:\n");
            if(Countdisplay == 0) printf("No order yet:\n\n\n");
            else{
                    for(int i=0; i<Countdisplay; i++){
//                        DisplayOrder[i]
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
                scanf("%d", &table); getchar();
            }while(table < 0 || table > 6);
            do{
                printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
                gets(NamaMakanan);
                lengthMkn = strlen(NamaMakanan);
            }while(strcmp(NamaMakanan, "Sate kambing") != 0 && strcmp(NamaMakanan, "Sate kelinci") != 0 && strcmp(NamaMakanan, "Sate kuda") != 0);
                printf("Input quantity[more or equal than 1]: ");
                scanf("%d", &quantity); getchar();
                if(quantity > 0){
                    printf("Input waiter name[5-20]: ");
                    gets(waiterName);
					length = strlen(waiterName);
					if(length >= 5 && length <= 20) printf("\nsuccesfully input order !\n");
                }
                Countdisplay++;
                DisplayOrder[Countdisplay] = {"%d. %sx%d on table %d has been served by %s\n", Countdisplay, NamaMakanan, quantity, table, waiterName};
//                }
            break;

            case 2:
                printf("\n\nYour Order List:\n");
                if(length == 0) printf("No Order Yet!!!!\n");
                else printf("Waiters Name: %s\nTable no: %d\nFood Name: %s\nQTY: %d\n", waiterName, table, NamaMakanan, quantity);
                break;
            case 3:
                if(length == 0) printf("No Order Yet!!!!\n");
                else{
                    printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
            do{
//                printf("Input food name[Sate kambing | Sate kelinci | Sate kuda]: ");
                gets(NamaMakanan);
            }while(strcmp(NamaMakanan, "Sate kambing") != 0 && strcmp(NamaMakanan, "Sate kelinci") != 0 && strcmp(NamaMakanan, "Sate kuda") != 0);
                printf("Input quantity[more or equal than 1]: ");
                scanf("%d", &quantity); getchar();
                if(quantity > 0){
                    printf("Input waiter name[5-20]: ");
                    gets(waiterName);
					int length = strlen(waiterName);
					if(length >= 5 && length <= 20) printf("\nsuccesfully update order !\n");
                }
                printf("==================================================================\n");
                }
            break;
            case 4:
                if(length == 0) printf("No Order Yet!!!!\n");
                else{
                    lengthMkn = 0;
                    length = 0;
                    quantity = 0;
                    Countdisplay = 0;
                }
                break;
            case 5:
                if(length == 0){
                    printf("No Order Yet!!!!\n");
                }
                else {
                    printf("%sx%d on table %d has been served by %s\n", NamaMakanan, quantity, table, waiterName);
                    return 0;
                }

                break;
        }
    }while(1);


return 0;
}
