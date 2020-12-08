#include <stdio.h>

struct Data{
	char Name[100];
	int jajan;
	int keluar;
}data[100];

int main(){
	int index = 0;
	FILE *file = fopen("contoh.txt", "r");
	if(!file){
		printf("Error! Opening FIle");
	}
	while (!feof(file)){
		fscanf(file, "%[^#]#%d#%d", &data[index].Name, &data[index].jajan, &data[index].keluar); fflush(stdin);
		index++;
	}
//	fputs("",file);
	fclose;
	FILE *file1 = fopen("contoh.txt", "a");
	if(!file1){
		printf("Error! Opening FIle");
	}
	for(int i=0; i<index; i++){
		fprintf(file1,"%s %d %d\n", data[i].Name, data[i].jajan, data[i].keluar);
	}
	fclose;
	
	return 0;
}
