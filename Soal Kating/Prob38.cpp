#include <stdio.h>

int main(){
	int cases, N;
	char tanda;
	
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		int tambah = 0;
		int tambah1 = 0;
		scanf("%c %d", &tanda, &N); getchar();
		int kurang = N*2-1;
		int kurang1 = N*2-1;
		for(int j=1; j<=N; j++){
			for(int k=1; k<=N*2-1; k++){
				if(tanda == '>'){
					if(k == j+tambah) printf("*"); //misal 5 jadi 1 3 5
					else(printf("."));
				}
				else if(tanda == '<'){
					if(j ==1 && k == N*2-1 || k == kurang)printf("*"); //misal 5 jadi 5 3 1
					else(printf("."));
				}
			}
			tambah++; kurang-=2; printf("\n"); 
		}
		for(int j=1; j<=N; j++){
			for(int k=1; k<=N*2-1; k++){
				if(tanda == '>'){
					if(j==1 && k==N*2-1 || k == kurang1)printf("*");
					else(printf("."));
				}
				else if(tanda == '<'){
					if(j==1 && k == 1) printf("*");
					else if(k == j+tambah1) printf("*");
					else(printf("."));
				}
			}
			kurang1-=2; tambah1++; printf("\n");
		}
	}
return 0;
}
