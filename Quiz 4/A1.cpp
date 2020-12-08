#include <stdio.h>

int main(){
	
	int cases;
	int number;
	
	//read cases
	scanf("%d", &cases);
	//looping untuk cases, read number, dan nested loop untuk cek numberny
	for(int i=0; i<cases; i++){
		scanf("%d", &number);
		printf("Case #%d:\n", i+1);
		for(int j=2; j<=number; j++){
			//karena 2 it prima jadi buat pengecualian untuk 2
			if(j == 2){
				printf("I will become a good boy.\n");
			}
			//cek buat angka lainny, bilangan prima hanya habis dibagi 1 dan habis dibagi bilangan itu sendiri
			else if (j %2 == 1){
				int prima = 0;
				//looping buat cek prima atau tidak
				for(int k=1; k<j; k++){
					if(j%k == 0){
						prima++;	
					}
				}
				if(prima == 2);
				printf("I will become a good boy.\n");
			}
		}
	}
	
	return 0;
}
