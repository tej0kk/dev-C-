#include <stdio.h>

int main(){

int cases;
int number;
scanf("%d", &cases);
int count = 0;
for(int i=0; i<cases; i++){
    scanf("%d", &number);
    printf("Case #%d:\n", i+1);
    int count = 0;
    for(int j=2; j<=number; j++){
        if(j == 2)printf("I will become a good boy\n");
        else if(j % 2 != 0){
          count = 0;
          for(int k = 1; k<=j; k++){
            if(j%k == 0) count++;
          }
       if(count == 2) printf("I will become a good boy\n");
        }

    }

}

return 0;
}
