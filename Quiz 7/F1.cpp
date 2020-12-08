#include <stdio.h>

int main(){

    int cases, number;
    scanf("%d", &cases);

    for(int i=0; i<cases; i++){
        scanf("%d", &number);
        int arr;
        int checklist[200000]={0};
        for(int j=0; j<number; j++){
            scanf("%d", &arr);
            //buat masukin arr[j] ke checklist
            checklist[arr]++;
        }
        
//        for(int j=0; j<number; j++){
//            
//        }
        //print checklist
		for(int j=0; j<number; j++){
            printf("%d ", checklist[j]);
        }
        int temp = 0;
        for(int j=0; j<200000; j++){
        	if(temp < checklist[j]){
        		temp = checklist[j];
			}
			else temp = temp;

        }
        printf("Case #%d: %d\n",i+1, temp);
		int tanda = 0;
		for(int j=0; j<200000; j++){
            if(checklist[j] == temp){
            	printf("%d", j);
            	tanda = j;
            	break;	
			}
        }
        
        for(int j=tanda+1; j<200000; j++){
            if(checklist[j] == temp) printf(" %d", j);
        }
		printf("\n");


    }

return 0;
}

