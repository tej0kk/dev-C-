#include <stdio.h>
#include <string.h>

int main(){
	
	int N;
	int length;
	char a[105];
	scanf("%d\n", &N);
	for(int i=0; i<N; i++){
		scanf("%s\n",&a);
		int length = strlen(a);
		int x = 0;
		if(length < 10){
			printf("%s\n", a);
		}
		else if(length >10){
			int x = length - 2;	
			printf("%s%d%s\n",a[0],x,a[length-1]);
		}
	}

	
	
	return 0;
}
