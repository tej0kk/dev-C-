#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
 int N,t;char check[50];
 char name[105][50], tree[105][50];
 FILE *file = fopen("testdata.in", "r");
 fscanf(file,"%d\n", &N);
 for ( int i = 0 ; i < N ; i++){
  fscanf(file, "%[^#]#%[^\n]n", name[i], tree[i]);
 }
 fscanf(file, "%d\n", &t);
 for ( int i = 0 ; i < t ; i++){
  
  fscanf(file,"%[^\n]\n", check);
  int num = -1;
  printf("Case #%d: ", i+1);
  for ( int j = 0 ; j < N ; j++){
   if ( strcmp(name[j], check)==0){
   	printf("strcmp: %d\n", strcmp(name[j], check));
    num = j;
    break;
   }
  }
  if ( num != -1) printf("%s\n", tree[num]);
  else printf("N/A\n");
 }
 fclose;
 return 0;
}
