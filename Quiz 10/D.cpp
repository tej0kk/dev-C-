#include <stdio.h>
int max = 0;
void hitung(int x, int l, int temp){
	if(temp > l) return;
	if(temp > max) max = temp;
	
	hitung(x, l, temp*3);
	hitung(x, l, temp*4);
	hitung(x, l, temp*5);

}

int main(){
	
	int cases;
	int x,l;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &x, &l);
		hitung(x, l, x);
		printf("Case #%d: %d\n",i+1, max);
		max = 0;
	}
	
	return 0;
}
