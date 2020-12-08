#include <stdio.h>
#include <string.h>
struct Nama{
	char name[100];
	char date[5];
	int jumlah;
};

struct Tanggal{
	char date[5];
};

int main(){
	//N jumlah org, M jumlah min kue
	int cases; int N, M;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		scanf("%d %d", &N, &M);
		struct Nama orang[N];
		for(int j=0; j<N; j++){
			scanf("%s %s %d", &orang[j].name, &orang[j].date, &orang[j].jumlah); 
		}
//		for(int j=0; j<N; j++){
//			printf("%s %s %d", orang[j].name, orang[j].date, orang[j].jumlah);
//		}
		//kapan toko buka
		int Q;
		scanf("%d", &Q); 
		struct Tanggal dateToko[Q];
		for(int k=0; k<Q; k++){
			scanf("%s", &dateToko[k].date);
			printf("%s", dateToko[k].date);
		}
		printf("Case #%d:\n", i+1);
		for(int l=0; l<Q; l++){
			for(int j=0; j<N; j++){
				printf("%s %s\n", orang[j].date, dateToko[l].date);
//				printf("%d %d %d ", orang[j].jumlah, M, strcmp(orang[j].date, dateToko[l]));
				if(orang[j].jumlah >= M && strcmp(orang[j].date, dateToko[l].date) == 0) printf("%s\n", orang[j].name);
				
			}
		}
	}
	
	return 0;
}
