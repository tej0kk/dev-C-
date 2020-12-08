#include <stdio.h>
#include <string.h>

struct data{
	int id;
	int a;
	int b;
	int c;
	char nama[12];
	char alamat[12];
};

int main(){
	int n;
	scanf("%d", &n);
//	int id, a,b,c;
	struct data mahasiswa[n];
	for(int i=0; i<n; i++){
		scanf("%d %d %d %d %s %s", &mahasiswa[i].id, &mahasiswa[i].a ,&mahasiswa[i].b ,&mahasiswa[i].c ,&mahasiswa[i].nama,&mahasiswa[i].alamat);
	}
	int q;
	scanf("%d", &q);
	int arr[q];
	for(int j=0; j<q; j++){
		scanf("%d", &arr[j]);
	}
	
	for(int j=0; j<q; j++){
		bool ada = false;
		for(int i=0; i<n; i++){
			if(arr[j] == mahasiswa[i].id){
				ada = true;
				printf("%d. %s was born on %d/%d/%d and live at %s\n", mahasiswa[i].id, mahasiswa[i].nama, mahasiswa[i].a, mahasiswa[i].b, mahasiswa[i].c, mahasiswa[i].alamat);
			} 
		}
		if (!ada){
			printf("No data found!\n");
		}
	}
	return 0;
}
