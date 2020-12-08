#include <stdio.h>

int main(){

int cases;
int N;

scanf("%d", &cases);
for(int i=0; i<cases; i++){
    scanf("%d", &N);int matriks[N][N];
    for(int j=0; j<N; j++){
        for(int k=0; k<N; k++){
            scanf("%d", &matriks[j][k]);
        }
    }
   
}
 for(int j=0; j<N; j++){
        for(int k=0; k<N; k++){
            printf("%d", matriks[j][k]);
        }
    }

return 0;
}
