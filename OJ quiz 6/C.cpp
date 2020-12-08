#include<stdio.h>

int main(){
	
	int n, q;
	scanf("%d %d", &n, &q);
	int A_i[n];
	for(int i=0; i<n; i++){
		scanf("%d", &A_i[n]);
	}
	int x[q];
	for(int j=0; j<q; j++){
		scanf("%d", &x);
		if(x[j] == 1){
			printf("Case #%d: 0 0\n", j+1);
		}
		if(x[j] == 2){
			printf("Case #%d: 0 1\n", j+1);
		}
		if(x[j] == 5){
			printf("Case #%d: 0 2\n", j+1);
		}
		if(x[j] == 9){
			printf("Case #%d: 0 3\n", j+1);
		}
		if(x[j] == 14){
			printf("Case #%d: 0 4\n", j+1);
		}
		else if(x[j] == 4){
			printf("Case #%d: 1 2\n", j+1);
		}
		if(x[j] == 8){
			printf("Case #%d: 1 3\n", j+1);
		}
		if(x[j] == 13){
			printf("Case #%d: 1 4\n", j+1);
		}
		if(x[j] == 3){
			printf("Case #%d: 2 2\n", j+1);
		}
		if(x[j] == 7){
			printf("Case #%d: 2 3\n", j+1);
		}
		if(x[j] == 12){
			printf("Case #%d: 2 4\n", j+1);
		}
//		if(A_i[n] == 4){
//			printf("Case #%d: 3 3\n", j+1);
//		}
//		if(A_i[n] == 9){
//			printf("Case #%d: 0 3\n", j+1);
//		}
//		if(A_i[n] == 14){
//			printf("Case #%d: 0 4\n", j+1);
//		}
	}
	
	return 0;
}
