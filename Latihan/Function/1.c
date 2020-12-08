#include <stdio.h>
#include <string.h>
//int power(int a, int b){
//    if( b == 0) return 1;
//    int hasil = a;
//    for(int i=1; i<b; i++){
//        hasil *= a;
//    }
//    return hasil;
//}

//void print(int n){
////    printf("%d\n", n);
//
//    if(n == 0) return;
//    else print(n-1);
//    printf("%d\n", n);
//}
//
//int sum(int n){
//    if(n == 1)return 1;
//    else return n +sum(n-1);
//}
void reverse(char* input, int n, int end){
    printf("%c\n", input[n]);
    if(n == end) return;
    else reverse(input, n+1, end);
//    printf("%c\n", input[n]);
//
//    if( n == 0) return;
//    else reverse(input, n-1);
}

void konversi(int n){
    if(n == 0 || n ==1){
        printf("%d", n);
    }
    else{
        konversi(n/2);
        printf("%d", n%2);
    }
}

int main(){
    konversi(12);


//    char input[] = "BINUS";
//    int length = strlen(input);
//    reverse(input,0, length-1);

//    int n;
//    scanf("%d", &n);
//    sum(n);
//    printf("%d\n", sum(n));

//    print(5);

//    int a = 2;
//    int b = 0;
//
//    int hasil = power(a,b);
//    printf("%d\n", hasil);
return 0;
}


