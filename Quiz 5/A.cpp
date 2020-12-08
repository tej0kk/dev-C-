#include <stdio.h>

int main(){
	
	int cases;
	int x,y,z,m,n,p;
	
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		int jojo = 0;
		int bibi = 0;
		scanf("%d %d %d %d %d %d", &x, &y, &z, &m, &n, &p);
		
		bibi = (y - (n*y) - (m*x) + x) / (n-m);
		jojo = (m*bibi)- (m*x) + x;
		
		jojo += z;
		bibi += z;
		if(jojo / bibi == p){
			printf("Case #%d: YES\n", i+1);
		}
		else{
			printf("Case #%d: NO\n", i+1);
		}
	}
	
	return 0;
}
