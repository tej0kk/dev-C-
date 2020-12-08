#include <stdio.h>

int main(){

    int cases, number;
    scanf("%d", &cases);
    for(int i=0; i<cases; i++){
        scanf("%d", &number);
        printf("Case #%d: ", i+1);
        int prima = 2;
        for(int j=0; j<number; j++){
            if(number % prima == 0){
                int count = 0;
                while(number % prima == 0){
                    number /= prima;
                    count++;
                }
                if(count != 1) printf("%d ^ %d",prima, count);
                else printf("%d ^ 1", prima);
                if(number != 1) printf(" * ");
            }
            prima++;
        }
        if(number != 1) printf("%d ^ 1", prima);
        printf("\n");
    }

return 0;
}
