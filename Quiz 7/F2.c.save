#include <stdio.h>

int main(){

    int cases, number;
    scanf("%d", &cases);

    for(int i=0; i<cases; i++){
        scanf("%d", &number);
        int arr[number]={0};
        int checklist[200000]={0};
        for(int j=0; j<number; j++){
            scanf("%d", &arr[j]);
        }
        //buat masukin arr[j] ke checklist
        for(int j=0; j<number; j++){
            checklist[arr[j]]++;
//            printf("%d", checklist[j]);
        }
        int temp = 0;
        for(int j=0; j<200000; j++){
            temp = temp < checklist[j] ? checklist[j] : temp;
        }
        printf("Case #%d: %d\n",i+1, temp);

        for(int j=0; j<200000; j++){
            if(checklist[j] == temp) printf("%d", j);
        }



    }

return 0;
}
