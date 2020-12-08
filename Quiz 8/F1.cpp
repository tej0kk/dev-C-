#include <stdio.h>

int main(){
 
 int N, M, K;
 scanf("%d %d %d", &N, &M, &K);
 int arrN[N];
 int arrLm;int arrRm;
 for(int i=1; i<=N; i++){
  scanf("%d", &arrN[i]);
 }
// int count = 0;
 
 for(int k=0; k<M; k++){
  scanf("%d %d", &arrLm, &arrRm);
  int temp[N] = {0};
  for(int j=arrLm; j<=arrRm; j++){
//   printf("%d ", arrN[j]);
   if(j % K == 0) temp[j] = arrN[j];
//   else count = 0;
  }
  int total = 0;
  for(int i=1; i<=N; i++){
//   printf("\n%d ", temp[i]);
//   if(temp[i] == 0) total = 0;
   if(temp[i] != 0) total += temp[i];
  }
  printf("%d\n", total);
  total = 0;
//  count = 0;
 }
 
 return 0;
}
