#include <stdio.h>

int main(){

    int cases;
    scanf("%d", &cases);
    int row, col;
    int row2, col2;
    for(int i=0; i<cases; i++){
        scanf("%d %d", &row, &col);
        int matriks[row][col];
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                scanf("%d", &matriks[j][k]);
            }
        }
//        for(int j=0; j<row; j++){
//            for(int k=0; k<col; k++){
//                printf("%d", matriks[j][k]);
//            }
//            printf("\n");
//        }
        scanf("%d %d", &row2, &col2);
        int matriks2[row2][col2];
        for(int j=0; j<row2; j++){
            for(int k=0; k<col2; k++){
                scanf("%d", &matriks2[j][k]);
            }
        }
        if(col != row2) return 0;
//        for(int j=0; j<row2; j++){
//            for(int k=0; k<col2; k++){
//                printf("%d", matriks2[j][k]);
//            }
//            printf("\n");
//        }
        int jumlah[row][col];
        int hasil = 0;
//        int count = 0;
        for(int j=0; j<row; j++){
            for(int k=0; k<col2; k++){
                for(int l=0; l<row2; l++){
                    hasil = hasil + matriks[j][l] * matriks2[l][k];
                }
                jumlah[j][k] = hasil;
                hasil = 0;
            }
        }
        printf("Case #%d:\n", i+1);
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                    printf("%d ",jumlah[j][k]);
            }
            printf("\n");
        }
    }

return 0;
}
