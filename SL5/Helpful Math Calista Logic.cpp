#include<stdio.h>
#include<string.h>
int main(){
 char s[105];
 int array[105];
 int counter = 0;
 int temp;
 gets(s);
 int x = strlen(s);
 
 for ( int i = 0 ; s[i]!='\0' ; i++ ){
  if ( s[i]>='0' && s[i]<='9'){
   array[i] = s[i] - '0';
   printf("%d\n",array[i]);
  }
 }
 for ( int i = 0 ; s[i]!='\0' ; i++){
  
  for ( int j = 0 ; j<(x-i-1) ; j++){
   
   if ( array[j] > array[j+1] ){
    temp = array[j];
    array[j] = array[j+1];
    array[j+1] = temp;
    printf("%d\n", array[j]);
   }
  }
 }
 for ( int k = 0 ; s[k]!='0' ; k++){
  printf ("%d\n", array[k]);
//  if ( k != x-1){
//   printf("+");
//  }
 }
 return 0;
}
