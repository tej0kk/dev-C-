#include <stdio.h>

int main(){
	char message[100];
	//buat baca di drive lain (yg penting pathny lengkap)
//	FILE* f = fopen("C:/data2.txt", "r");
	
	//naik satu level diatas folder cpp
//	FILE* f = fopen("../files/data2.txt", "r");

	//disatu folder dengan cpp tapi filenya ad di dlm folder
	//path
//	FILE* f = fopen("files/data2.txt", "r");

	//disatu folder fileny
	FILE* f = fopen("data.txt", "r");
	//1 baris
//	fscanf(f, "%[^\n]", &message);
	//kalau banyak baris scan sampai file akhir
	while(!feof(f)){
		fscanf(f, "%[^\n]\n", &message);
		fprintf("%s\n", message);
	}
	fclose(f);
	
	fprintf("%s\n", message);
	return 0;
}
