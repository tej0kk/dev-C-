#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<2*n-1;i++){
		for(int j=0;j<2*n-1;j++){
			int x=n-j-1;
			int y=n-i-1;
			if(x<0) x*=-1;
			if(y<0) y*=-1;
			x+=1;
			y+=1;
            printf("(%d %d)",x,y);

//			if(x == n || y == n || x == y)printf("*");
//			else printf(" ");
//			Diamond SOCS
//			if(x + y == n + 1 || x == 1 || y == 1) printf("0");
//			else printf(".");
//			print bingkai
//			if(x == n || y == n || x == 1 || y == 1) printf("0");
//			else printf(" ");
//			HackerRank Pattern 2
//			if(x>y) printf("%d",x);
//			else printf("%d", y);
//			printf("(%d %d)",x,y);

		}
		printf("\n");
	}

}
