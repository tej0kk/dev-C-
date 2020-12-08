#include <stdio.h>
#include <string.h>

int main(){
	char input[105];
	scanf("%s", &input);
	int length;
	length = strlen(input);
//	printf("%s\n", input);
	//variable buat nampung hello yang bener
	char hello[] = "hello";
	int lengthhello;
	lengthhello = strlen(hello);
//	printf("%s\n", hello);

	int penunjuk = 0;
	char hurufdicari = hello[penunjuk];
	char hurufsebelumnya =' ';
	// looping buat cek karakter input
	for(int i=0; i<length; i++){
		//jika input[i] adalah huruf yg sama dengan huruf di hello[] 
		if(input[i] == hurufdicari){
			hurufsebelumnya = hurufdicari;
			penunjuk++;	
			if(penunjuk >= lengthhello){
				printf("YES\n");
				break;
			}
			hurufdicari = hello[penunjuk];
		}
		else{
			if(input[i] != hurufsebelumnya && hurufsebelumnya != ' '){
				printf("NO\n");
				break;
			}
		}
	}
	return 0;
}
