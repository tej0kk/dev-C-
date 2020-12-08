#include <stdio.h>

int main(){

    long long int number, X, Y;
    scanf("%lld %lld %lld", &number, &X, &Y);
    long long int deret[number];
    long long int odd[number]; long long int countOdd = 0;
    long long int even[number]; long long int countEven = 0;
    long long int hasil = 0;
    long long int hasilOdd = 0;
    for(int i=0; i<number; i++){
        scanf("%lld", &deret[i]);
        if(deret[i] % 2 == 0){
            even[countEven] = deret[i];
//            printf("Y=%d\n", Y);
            even[countEven] *= Y;
            hasil += even[countEven];
//            printf("no%d, %d\n",i+1, hasil);
            countEven++;
        }
        else if(deret[i] % 2 != 0){
            odd[countOdd] = deret[i];
            odd[countEven] = deret[i];
//            printf("X=%d\n", X);
            odd[countOdd] *= X;
            hasilOdd += odd[countOdd];
//            printf("noOdd%d, %d\n",i+1, hasilOdd);
            countOdd++;
        }
    }
    hasil+=hasilOdd;
    printf("%lld\n", hasil);
//    for(int j=0; j<number; j++){
//          if(deret[j] % 2 == 0){
//            even[countEven] = deret[j];
//            countEven++;
//        }
//        else{
//            odd[countOdd] = deret[j];
//            countOdd++;
//        }
//    }

return 0;
}
