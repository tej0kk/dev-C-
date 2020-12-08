#include <stdio.h>

int main(){

int menu;
int angka[200];
int count = 0;
int number;
do{
    printf("Welcome to App\n");
    printf("1. Insert\n");
    printf("2. View\n");
    printf("3. Update\n");
    printf("4. Delete\n");
    printf("5. Exit\n");
    scanf("%d", &menu); getchar();

    switch(menu){
        case 1:

            do{
                printf("Insert Number[1 - 200]: ");
                gets(angka); getchar();
            }while(!(number >= 1 && number <= 200));
            angka[count++] = number;
        break;
        case 2:
            for(int i=0; i<count; i++){
                printf("%d\n", angka[i]);
            }
        break;
        case 3:
            printf("Update : ");
        break;
        case 4:
            printf("Delete : ");
        break;
        case 5:

        break;
    }
}while(menu != 5);

return 0;
}
