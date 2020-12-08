#include<stdio.h>
int main(){
 char card[5];
 int checklist[15]= {0};
 int max;
 
 for(int i=0; i<5; i++){
  scanf("%s",&card);
  
  if( card[0]=='A'){
   checklist[1]++;
  }
  else if( card[0]=='T'){
   checklist[10]++;
  }
  else if( card[0]=='J'){
   checklist[11]++;
  }
  else if( card[0]=='Q'){
   checklist[12]++;
  }
  else if( card[0]=='K'){
   checklist[13]++;
  }
  else{
   checklist[card[0]-'0']++;
  }
 }
 max = checklist[0];
// printf("%d\n", checklist[0]);
 for (int i=0; i<=13; i++){
  max = (max>checklist[i]) ? max : checklist[i];
 }
 printf("%d\n",max); 
}
