#include<stdio.h>

void merge(int angka[], int l, int m, int r){
 int n1= m-l+1;//menentukan butuh array indext brp di L
 int n2= r-m;//untuk yang Right
 int L[n1], R[n2];
 for(int a=0; a<n1; a++){
  L[a] = angka[a+l];
 }
 for(int b=0; b<n2; b++){
  R[b]= angka[b+m+1];//krn m+1 itu sesuai rumus rekursif di bawah
 }
 int i=0, j=0, k=l;//karena l tidak selalu 0
 while(i<n1 && j<n2){
  if(L[i]<=R[j]){
   angka[k]= L[i];
   i++; k++;
  }
  else{
   angka[k]= R[j];
   j++; k++;
  }
 }
 
 while(i<n1){
  angka[k]=L[i];
  i++; k++;
 }
  
 while(j<n2){
  angka[k]= R[j];
  j++; k++;
 } 
}

void mergeSort(int angka[], int l, int r){
 if(l<r){
  int m=(l+r)/2;
  mergeSort(angka, l, m);//untuk pemisahan bagian kiri
  mergeSort(angka, m+1, r);//untuk pemisahan bagian kanan
  merge(angka, l, m, r);
 }
}

int main(){
 int angka[6]= {3, 5,1,4,2};
 for(int i=0; i<5; i++){
  printf("%d ", angka[i]);
 }
 printf("\n");
 mergeSort(angka, 0, 4);
 for(int i=0; i<5; i++){
  printf("%d ", angka[i]);
 }
 return 0;
}
