#include <stdio.h>

int main(){

    int cases, row, col;
    scanf("%d", &cases);
    int count;
    int temp;
    int x,y;
    for(int i=0; i<cases; i++){
        scanf("%d %d", &row, &col); getchar();
        char matriks[row][col+1];
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                scanf("%c", &matriks[j][k]);
                if(matriks[j][k] == '>' || matriks[j][k] == '<' || matriks[j][k] == 'x'){
                    //y == baris || x == kolom
                    x=k; y=j;
//                    printf("%d,%d\n", y,x);
                }
            } getchar();
        }
                printf("Case #%d: ",i+1);
                if(matriks[y][x] == '>'){
                    count = 0;
                    temp = 0;
                    for(int j=0; y+temp<row && x-temp>=0 ; j++){
                        if(matriks[y+temp][x-temp] == '*')count++;
                        temp++;
                    }
                    temp = 0;
                    for(int k=x; y-temp>=0 && x-temp>=0 ; k--){
                        if(matriks[y-temp][x-temp] == '*')count++;
                        temp++;
                        }
//                    }
                    printf("%d\n", count);
                }
                else if(matriks[y][x] == '<'){
                        count = 0;
                        temp = 0;
                    for(int j=0; y+temp<row && x+temp<col ; j++){
                        if(matriks[y+temp][x+temp] == '*')count++;
                        temp++;
                    }
                    temp = 0;
                    for(int k=x; y-temp>=0 && x+temp<col ; k++){
                       if(matriks[y-temp][x+temp] == '*')count++;
                       temp++;
                    }
//                    }
                    printf("%d\n", count);
                }

                else if(matriks[y][x] == 'x'){
                        count = 0;
                        temp = 0;
//                     kurang dari
                    for(int j=0; y+temp<row && x+temp<col ; j++){
                        if(matriks[y+temp][x+temp] == '*')count++;
                        temp++;
                    }
                    temp = 0;
                    for(int k=x; y-temp>=0 && x+temp<col ; k++){
                       if(matriks[y-temp][x+temp] == '*')count++;
                       temp++;
                    }
//               lebih dari
                    temp = 0;
                   for(int j=0; y+temp<row && x-temp>=0 ; j++){
                        if(matriks[y+temp][x-temp] == '*')count++;
                        temp++;
                    }
                    temp = 0;
                    for(int k=x; y-temp>=0 && x-temp>=0 ; k--){
                        if(matriks[y-temp][x-temp] == '*')count++;
                        temp++;
                        }
//                    }
                    printf("%d\n", count);
                    }
                }

//    }
return 0;
}
