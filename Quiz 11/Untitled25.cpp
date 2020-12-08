#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
 int N,t;
 char check[50];
 char name[100][50], tree[105][45];
 FILE *file = fopen("testdata.in", "r");
 fscanf(file,"%d\n", &N);
 for ( int i = 0 ; i < N ; i++){
  fscanf(file, "%[^#]#%[^\n]\n", name[i], tree[i]);
//  printf("%s ",name[i]);
 }
 fscanf(file, "%d\n",&t);
 for ( int i = 0 ; i < t ; i++){
//  printf("%s ",name[i]);
  fscanf(file,"%[^\n]\n", check);
  printf("Case #%d: ", i+1);
  int num = -1;
  for ( int j = 0 ; j < N ; j++){
 if(strcmp(name[j], check) == 0){
     num = j;
    }
  }
  if(num != -1) printf("%s\n", tree[num]);
  else printf("N/A\n");
 }
 fclose(file);
 return 0;
}
