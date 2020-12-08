#include <stdio.h>

int main(){

    long long int cases, number;
    scanf("%lld", &cases);
    for(int i=0; i<cases; i++){
        scanf("%lld", &number);
        long long int arr[number];
        long long int nyawa[number];
        long long int count= 0;
        long long int max = 0;
        for(int j=1; j<=number; j++){
            scanf("%lld", &arr[j]);
//            if(nyawa + arr[j] <= 0){
//                nyawa += arr[j];
//                if(max > nyawa) max = nyawa;
////                count++;
//                printf("%d.%d\n",j, max);
//            }
        }
        for(int k=1; k<=number; k++){
            count+=arr[k];
            nyawa[k]= count;
            if(max > nyawa[k]) max = nyawa[k];
        }
        printf("Case #%d: %lld\n",i+1, max*-1+1);
//        printf("Case #%d: %d\n", i+1, max*-1+1);
//        if(count == 0) printf("Case #%d: %d\n", i+1, count+1);
//        printf("Case #%d: %d\n", i+1, count);

    }

return 0;
}
