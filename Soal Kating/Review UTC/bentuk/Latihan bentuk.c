#include <stdio.h>

int main(){

    int size;
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            int x=size-i-1;
            int y=size-j-1;
            if(x<0) x*=-1;
			if(y<0) y*=-1;
			x+=1;
			y+=1;
            printf("(%d %d)", y, x);
            //if(y==x || x+y == size+1 || y == (size+1)/2 || x == size || x == 1)printf("*");
            //else printf(" ");
            //if(x == 1 || x % 2 == 0 && y == 1 || x+y == size+1) printf("*");
            //if(x == size-1 || x+y == size+1) printf("*");
            //else printf(" ");
            //if(x+y==size+1 || x == 1 || y == 1)printf("$");
            //else printf(".");
        }
        printf("\n");
    }
return 0;
}
