#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	char sheep[100005];
	int length;
	int white,black;
	
	//cases
	scanf("%d", &cases);
	//looping cases
	for(int i=0; i<cases; i++){
		//sheep
		scanf("%s", &sheep);
		//buat hitung panjang sheep
		length = strlen(sheep);
		//reset white and black to zero
		white = 0;
		black = 0;
		//looping sheep
		for(int j=0; j<length; j++){
			//selection buat cek jumlah B dan W
			if(sheep[j] == 'W'){
				white++;
				//jika white = 10 maka stop
				if(white == 10){
					break;
				}
			}
			else if (sheep[j] == 'B'){
				black++;
				/* jika black % 2 == 0, white -- 
				jika whiteny msh 0 maka white tidak di -- 
				karena akan menjadi negatif */
				if(black % 2 == 0){
					if(white == 0){
						white = 0;
					}
					else{
						white--;
					}
				}
			}
		}
	if(white >= 10){
		printf("Case #%d: Jojo fall asleep\n",i+1);
	}
	else{
		printf("Case #%d: Jojo stayed awake\n",i+1);
	}
}
	return 0;
}
