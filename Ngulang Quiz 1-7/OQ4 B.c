#include <stdio.h>

int main(){

int cases, number, angka;
scanf("%d", &cases); getchar();
int jojo = 0;
int lili = 0;
for(int i=0; i<cases; i++){
    scanf("%d", &number); getchar();
    jojo = 0;
    lili = 0;
    for(int j=0; j<number; j++){
        scanf("%d", &angka); getchar();
        if(angka % 2 == 0 && j % 2 == 0) jojo++;
        else if(angka % 2 != 0 && j % 2 != 0) lili++;
    }
    if(jojo % 2 == 0 && lili % 2 == 1) printf("Case #%d: :|\n", i+1);
    else if(jojo % 2 == 0 && lili % 2 ==0) printf("Case #%d: :)\n", i+1);
    else if(jojo % 2 == 1 && lili % 2 ==1) printf("Case #%d: :(\n", i+1);
}

return 0;
}
