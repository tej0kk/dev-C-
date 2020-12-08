#include <stdio.h>
#include <string.h>

int main(){
	
	char name[105];
	int length;
	scanf("%s", &name);
	length = strlen(name);
	//lowercase == 97-122
	if(name >96 && name <123){
		if(length % 2 ==0){
			printf("CHAT WITH HER!\n");
		}
		else{
			printf("IGNORE HIM!\n");
		}
	}
	
	return 0;
}
