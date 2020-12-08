#include <stdio.h>

int main(){
    int cases, number;
    scanf("%d", &cases);
    int nyawa = 0;
    int count = 0;
    for(int i=0; i<cases; i++){
        scanf("%d", &number);
        int arr[number];
        for(int j=0; j<number; j++){
            scanf("%d", &arr[j]);
//            printf("%d\n", arr[j]);
            if(nyawa + arr[j] <= 0){
                    do{
                nyawa++;
                count++;
                    }while(nyawa + arr[j] <= 0);
            }
            nyawa += arr[j];
        }
        /*if(count == 0)*/ printf("Case #%d: %d\n",i+1, count);
//        else printf("Case #%d: %d\n",i+1, count);

//        if(nyawa == 1) printf("Case #%d: %d\n",i+1, nyawa+1);
//        else if(nyawa == 0) printf("Case #%d: %d\n",i+1, nyawa+2);
//        else if(nyawa < 0) printf("Case #%d: %d\n",i+1, nyawa*-1);
//        else printf("Case #%d: %d\n",i+1, nyawa);
//        nyawa = 2;
    }

return 0;
}
