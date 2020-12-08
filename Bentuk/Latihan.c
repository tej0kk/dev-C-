#include <stdio.h>

int main(){

int size;
scanf("%d", &size);
for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        if(j==i || j==size-1-i) printf("*");
        else if(i == size/2) printf("*");
        else if(j == 0 || j == size-1) printf("$");
        else if(i == 0 || i == size-1) printf("#");
        else printf(" ");
    }
    printf("\n");
}
return 0;
}
