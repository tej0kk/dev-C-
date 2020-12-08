#include <stdio.h>

void hitung(int N, int start, int arr[8]){
	for(int i=1; i<=N; i++){
//		if(arr[start-1] == 0) printf("%d", i);
		bool ada = false;
		// buat cek isi arr sdh ad atau blm
		for(int j=0; j<start; j++){
			if (arr[j]==i){
				ada = true;
				break;
//				continue;
			}
		}
		// kalau ga ad dia isi;
		if(!ada) arr[start-1] = i;
		else continue;
		if(start == N){
			for(int k=0; k<N; k++){
				printf("%d", arr[k]);
			}
			printf("\n");
		}
		// kalau msh blm full panggil rekursi
		else{
			hitung(N, start+1, arr);
		}
	}
}
int main(){
	int cases;
	int N;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d", &N);
		printf("Case #%d:\n", i+1);
		int arr[7] = {0};
		hitung(N, 1, arr);
		
//		printf("%d\n", hasil);
	}
	
	return 0;
}
