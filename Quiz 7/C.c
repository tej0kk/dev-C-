#include <stdio.h>
#include <math.h>

int main(){

    int cases, number;
    scanf("%d", &cases);
    int count = 0;
    for(int i=0; i<cases; i++){
        scanf("%d", &number);
        /* casting hasil dr number ke int dan sebelum itu number
        dicasting ke double*/
        int convert = (int)sqrt((double)number);
//        printf("%d", convert);
        printf("Case #%d: ", i+1);
        if(number % 2 == 0){
            while (number % 2 == 0){
                number /= 2;
                count++;
            }
            printf("2 ^ %d", count);
            if(number != 1) printf(" * ");
        }
        count = 0;
        for(int j=3; j<=convert; j+=2){
            if(number % j == 0){
                while(number % j == 0){
                    number /= j;
                    count++;
                }
                printf("%d ^ %d",j, count);
                if(number != 1) printf(" * ");
                count = 0;
            }
        }
        if(number != 1) printf("%d ^ 1", number);
        printf("\n");
//        else if(number % j != 0) printf("%d ^ 1", j);
    }

return 0;
}
