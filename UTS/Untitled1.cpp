#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			int x=n-j-1;
			int y=n-i-1;
			if(x<0) x*=-1;
			if(y<0) y*=-1;
			x+=1;
			y+=1;
			if()
		}
		printf("\n");
	}
	return 0;
}
