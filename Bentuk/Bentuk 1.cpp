#include <stdio.h>

int size;
//segitiga siku" rata kiri
void atas_kiri(){
	
//	int size;
	scanf("%d", &size);
	for(int i=1; i<=size; i++){
		for(int j=1; j<=i; j++){
		printf("*");
		}
		printf("\n");
	}
	int space = 1;
	for(int i=size; i>=1; i--){
		for(int j=1; j<=space; j++){
			printf(" ");
		}
		for(int k=1; k<=i; k++){
		printf("*");
		}
		printf("\n");
		space++;
	}
	printf("\n");

	printf("\n");
}
//segitiga siku-siku rata kanan
void atas_kanan(){
	
	int space = 1;
	for(int i=size; i>=1; i--){
		for(int j=1; j<=space; j++){
			printf(" ");
		}
		for(int k=1; k<=i; k++){
		printf("*");
		}
		printf("\n");
		space++;
	}
	printf("\n");
}

//segitiga siku" rata kiri atas
void bawah_kiri(){
	
//	int size2;
//	scanf("%d", &size);
	for(int i=size; i>=1; i--){
		for(int j=1; j<=i; j++){
			/*if(i==0 || i==5 || j==0 || j==5)*/ printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

//segitiga rata kanan bawah
void bawah_kanan(){
	int space = size-1;
	for(int i=1; i<=size; i++){
		for(int s=1; s<=space; s++){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
		printf("*");
		space--;
		}
		printf("\n");
	}
}

int main(){
	atas_kiri();
	atas_kanan();
	bawah_kiri();
	bawah_kanan();
}
