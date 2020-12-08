#include <stdio.h>

int main(){

    int cases;
    scanf("%d", &cases);
    long long int row, col;
    long long int row2, col2;
    for(int i=0; i<cases; i++){
        scanf("%lld %lld", &row, &col);
        long long int matriks[row][col];
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                scanf("%lld", &matriks[j][k]);
            }
        }
//        for(int j=0; j<row; j++){
//            for(int k=0; k<col; k++){
//                printf("%d", matriks[j][k]);
//            }
//            printf("\n");
//        }
        scanf("%lld %lld", &row2, &col2);
        long long int matriks2[row2][col2];
        for(int j=0; j<row2; j++){
            for(int k=0; k<col2; k++){
                scanf("%lld", &matriks2[j][k]);
            }
        }
        if(col != row2) return 0;
//        for(int j=0; j<row2; j++){
//            for(int k=0; k<col2; k++){
//                printf("%d", matriks2[j][k]);
//            }
//            printf("\n");
//        }
        long long int jumlah[row][col2];
        long long int hasil = 0;
//        int count = 0;
        for(int j=0; j<row; j++){
            for(int k=0; k<col2; k++){
                for(int l=0; l<row2; l++){
//                    jumlah[j][k] += matriks[j][l] * matriks2[l][k];
                    hasil = hasil + matriks[j][l] * matriks2[l][k];
                }
                jumlah[j][k] = hasil;
                hasil = 0;
            }
        }
        printf("Case #%d:\n", i+1);
        for(int j=0; j<row; j++){
            for(int k=0; k<col2; k++){
                if(k == col2-1) printf("%lld",jumlah[j][k]);
                else printf("%lld ",jumlah[j][k]);
            }
            printf("\n");
        }
    }

return 0;
}
