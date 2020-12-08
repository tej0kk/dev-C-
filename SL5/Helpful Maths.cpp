#include <stdio.h>
#include <string.h>

int main(){
	char input[105];
	scanf("%s", &input);
	int angka[105];
	int length;
	length = strlen(input);
//	printf("%s\n", input);
//	printf("%d\n", length);
//	diinisialisasi 0 karena akan menampung angka dari indeks 0
	int jumlahangka = 0;
	for(int i=0; i<length; i++){
		if(input[i] == '+'){
//			printf("Non Angka\n");
		}
		else{
//			masukin angka" yg dr input ke dalam variable angka lalu di ++
			angka[jumlahangka] = input[i]-'0';
			jumlahangka++;
//			printf("%d\n", angka);
//			printf("%d", jumlahangka);
		}
	}
//	sorting angka
	for(int j=0; j<jumlahangka; j++){
		for(int k=j; k<jumlahangka; k++){
		if(angka[k] < angka[j]){
			int temp = angka[k];
			angka[k] = angka[j];
			angka[j] = temp;
		}
		}
	}
//	looping buat print 
	for(int l=0; l<jumlahangka; l++){
//		buat print hasil akhir tanpa +, jumlahangka-1 karena index selalu dimulai dari 0
		if(l == jumlahangka-1){
			printf("%d", angka[l]);
		}
		else{
			printf("%d+", angka[l]);	
		}
	}
	return 0;
}
