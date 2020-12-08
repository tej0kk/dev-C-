#include <stdio.h>

int operasi(int arr1[], int j, int index, int total, int m){
	//balik ke diri sendiri/ rekursif
	//index = j+1 jadi dia cr sampe index == j+1
	//dia return jumlah nilai yang samadgn total == m
	if(index >= j+1 && total == m) return 1;
	//balik ke diri sendiri/ rekursif
	else if(index > j) return 0;
	//balik ke main
	else{
		return operasi(arr1, j, index+1, total + arr1[index], m) +
			   operasi(arr1, j, index+1, total - arr1[index], m) +
			   operasi(arr1, j, index+1, total,               m);
	}
}

int main(){
	int cases; int M; int jumlah;
	scanf("%d", &cases);
	int arr[jumlah];
	for(int i=0; i<cases; i++){
		scanf("%d %d", &M, &jumlah);
		for(int j=0; j<jumlah; j++){
			scanf("%d", &arr[j]);
		}
		int akhir = operasi(arr, jumlah-1, 0, 0, M);
		if(M == 0) akhir -= 1;
		if(akhir == 0) printf("Case #%d: There's no way.\n", i+1);
		else if(akhir != 0) printf("Case #%d: There will be %d way(s).\n", i+1, akhir);
	}
	return 0;
}
