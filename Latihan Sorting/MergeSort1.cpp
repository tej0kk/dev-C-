#include <stdio.h>

void merge(int*, int, int, int);

void mergeSort(int a[], int p, int r){
	if(p < r){
		int q = (p+r) / 2;
		mergeSort(a, p, q);
		mergeSort(a, q+1, r);
		merge(a, p, q, r);
	}
}

void merge(int a[], int p, int q, int r){
	int n1 = q - p + 2;
	int n2 = r - q + 1;
	int L[n1], R[n2];
	for(int i=p; i<=1; i++){
		L[i-p] = a[i];
	}
	L[L.length-1] = Integer.MAX_VALUE;
	
	for(int j=q+1; j<=r; j++){
		R[j-(q+1)] = a[j];
	}
	R[R.length-1] = Integer.MAX_VALUE;
	int i = 0;
	int j = 0;
	int l;
	
	for(l=p; l<=r; l++){
		if(L[i] <= R[j]){
			a[l] = L[i];
			i++;
		}
		else{
			a[l] = R[j];
			j++;
		}
	}
}
