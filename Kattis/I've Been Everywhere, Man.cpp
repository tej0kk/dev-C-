/*#include <stdio.h>
#include <string.h>

int main(){

	int cases;
	int cities;
	char name[25][25];

	scanf("%d", &cases);
	getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &cities);
		getchar();
		int count = 1;
		int temp = 0;
		for(int j=0; j<cities; j++){
			scanf("%s", &name[j]); getchar();
		}
		for(int j=0; j<cities; j++){
			for(int k=j-1; k>=0; k--){
                if(strcmp(name[k],name[j]) == 0){
                    temp = 0;
                    break;
                }
				else temp = 1;
			}
			if(temp == 1)count++;
		}

			printf("%d\n", count);
	}

	return 0;
} */

#include <stdio.h>
#include <string.h>

int main(){

	int cases;
	int cities;
	char name[25][25];

	scanf("%d", &cases);
	getchar();
	for(int i=0; i<cases; i++){
		scanf("%d", &cities);
		getchar();
		int count = 0;
		int temp = 0;
		for(int j=0; j<cities; j++){
		    temp = 1;
			scanf("%s", name[j]); getchar();
			for(int k=j-1; k>=0; k--){
				// int result = strcmp(name[k],name[j]);
//				printf("%d\n", result);
                if(strcmp(name[k],name[j]) == 0){
                    temp = 0;
                    break;
                }
				// else if(result != 0) temp = 1;
//				if(result != 0) count++;
			}
			if(temp == 1)count++;
		}

			printf("%d\n", count);
	}

	return 0;
}

