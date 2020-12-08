#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
double RandStorage(double);
int main(){
    int choice;

    // variable case 1
    char FileType[100];
    char FileName[100]; int LengthName;
    char CopyFileName[100][100]; int lengthCopy; int index = 0;
    char run, run2, run3, run4;
    double storage;
    double random = 0;
    double CopyRandom[100];
    do{
        while(1){
            printf("Hextech File Storage\n");
            printf("=============================\n");
            printf("1. Save a File\n");
            printf("2. History\n");
            printf("3. Remove All Files\n");
            printf("4. Exit\n");
            break;
        }
        do{
            printf("Choice: ");
            scanf("%d", &choice); getchar();
        }while(choice < 0 || choice > 5);

        switch(choice){
            case 1:
                do{
                    printf("Save a File\n\n\n");
                    printf("Choose file type[document|image]: ");
                    gets(FileType);
                }while(strcmp(FileType,"document") != 0 && strcmp(FileType,"image") != 0);
                if(strcmp(FileType,"document") == 0){
                    do{
                        printf("Input file name [5-20 character]: ");
                        gets(FileName);
                        LengthName = strlen(FileName);
                    }while(LengthName <4 || LengthName > 21);
                    strcat(FileName, ".doc");
                    strcpy(CopyFileName[index], FileName);
                    lengthCopy = strlen(CopyFileName[index]);
                    random = RandStorage(1);
                    CopyRandom[index] = random;
                    printf("You saved %s (%.2lf MB)\n", CopyFileName[index], CopyRandom[index]);
                    printf("Press enter to continue!!");getchar();
                }

                else if(strcmp(FileType,"image") == 0){
                    do{
                        printf("Input file name [5-20 character]: ");
                        gets(FileName);
                        LengthName = strlen(FileName);
                    }while(LengthName <4 || LengthName > 21);
                    strcat(FileName, ".jpg");
                    strcpy(CopyFileName[index], FileName);
                    lengthCopy = strlen(CopyFileName[index]);
                    random = RandStorage(1);
                    CopyRandom[index] = random;
                    printf("You saved %s (%.2lf MB)\n", CopyFileName[index], CopyRandom[index]);
                    printf("Press enter to continue!!");getchar();
                }
                index++;
            break;

            case 2:
                if(index == 0) printf("No Data Yet\n");
                else{
                printf("History\n\n");
                for(int i=0; i<index; i++){
                    random = RandStorage(1);
                    printf("File number 00%d: %s (%.2lf MB)\n", i+1, CopyFileName[i], CopyRandom[i]);
                }
                    printf("\nPress enter to continue...."); getchar();
                }
                break;
            case 3:
                if(index == 0) printf("No Data Yet\n");
                else{
                printf("Remove All Files\n");
                lengthCopy = 0;
                LengthName = 0;
                index = 0;

                for(int i=0; i<101; i++){
                    memset(CopyFileName[i] , '\0', 100);
                    CopyRandom[i] = 0;
                }
                if(index == 0) printf("All files has been removed!\n\n");
                    printf("Press enter to continue..");
                    getchar();
                }
                break;
            case 4:
                printf("Thank you for using this application!!\n\n");

                    printf("Press enter to exit..");
                    getchar();
                    return 0;
                break;
        }
    }while(1);
}
double RandStorage(double randSTR){
    double Storage;
    srand(time(NULL));
    Storage = rand()%1000;
    Storage /= 100;
    return Storage;
}
