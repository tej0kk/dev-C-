#include <stdio.h>
#include <string.h>
int main(){
	
	char a[100], b[100];
	int lengtha, lengthb;
	int LA=0, LB=0;
	scanf("%s", &a);
	lengtha = strlen(a);
	for(int i=0; i<=lengtha-1; i++){
		if(a[i] == 'a'){
			LA++;
		}
//	i++;
	}
	scanf("%s", &b);
	lengthb = strlen(b);
	for(int j=0; j<=lengthb-1; j++){
		if(b[j] == 'b'){
		LB++;	
		}
		
//	j++;
	}
	if( LA > LB ){
		printf("go\n");
	}
	else{
		printf("no\n");
	}
	
	return 0;
}
