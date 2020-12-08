#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct data{
	char jenis[1005];
	char nama[1005];
};

void swap(struct data a[], struct data b[]){
	struct data temp= *a;
	*a = *b;
	*b = temp;
}

int partition(struct data m[], int l, int r){
	int random = rand()%(r-l)+l;
	swap(&m[r], &m[random]);

	int i= l-1;
	char pv[1005];
	strcpy(pv, m[r].jenis) ;
	for(int a=l; a<=r-1; a++){
		if(strcmp(m[a].jenis, pv) < 0){
			i++;
			swap(&m[i], &m[a]);
		}
		else if(strcmp(m[a].jenis, pv) == 0){
			if(strcmp(m[a].nama , m[r].nama)<0){
				i++;
				swap(&m[i], &m[a]);
			}
		}
	}
	i++;
	swap(&m[i], &m[r]);
	return i;
}

void quickSort(struct data m[], int l, int r){
	if(l<r){
		int mid= partition(m, l, r);
		quickSort(m, l, mid-1);
		quickSort(m, mid+1, r);
	}
}
FILE *fp;

int main(){
	srand(time(0));
	int n=0;
	struct data m[10005];
	char pivot[1005];
	fp = fopen("testdata.in", "r");
	while(!feof(fp)){
		fscanf(fp, "%[^-]-%[^\n]\n", &m[n].jenis, &m[n].nama);
		n++;
	}

	quickSort(m, 0, n-1);

	strcpy(pivot, m[0].jenis);
	for(int i=0; i<n; i++){
		//printf("%s - %s\n", m[i].jenis, m[i].nama);
		if(i==0){
			printf("%s:\n", m[i].jenis);
		}
		else if(strcmp(m[i].jenis, m[i-1].jenis)>0){
			printf("\n%s:\n", m[i].jenis);
		}
		while(strcmp(pivot, m[i].jenis)==0){
			printf("%s\n", m[i].nama);
			i++;
			while(strcmp(m[i].nama, m[i-1].nama)==0 && strcmp(m[i].jenis, m[i-1].jenis)==0){
				i++;
			}
		}
		strcpy(pivot, m[i].jenis);
		i--;
	}
	printf("\n");
	fclose(fp);
	return 0;
}
/*
Vitami-Blackmores Multivitamin
Vitamin-Blackmores Multivitamin
Vitami-Blackmores Multivitamin
Vitami-Blackmores Multivitamin
Vitamin-Blackmores Multivitamin
*/
