#include <stdio.h>
#include <string.h>

int main(){
	
	char input[85];int count = 0; int temp;
	scanf("%[^\n]", input); getchar();
	
	char* split = strtok(input, " ");
	char tampung[80][80];
	int penunjuk = 0;
	while (split != NULL){ 
			strcpy(tampung[penunjuk], split);
//			printf("%s\n", tampung[penunjuk]);
//			printf("%d\n", penunjuk);
			penunjuk++; 
//			printf("%d\n", penunjuk);
//			temp = strcmp(tampung[penunjuk-1],tampung[penunjuk]);
        split = strtok(NULL, " "); 
        
//        if(split == split) printf("no\n");
//		else if(split != split) printf("yes\n");
    }
    
    for(int i=0; i<penunjuk; i++){
    	for(int j=0; j<penunjuk; j++){
    		if(i==j) continue;
    		else{
    			temp = strcmp(tampung[i],tampung[j]);
//    			printf("%d\n", temp);
    			if(temp == 0) count++;	
			}
		}
	}
//	printf("%d\n", count);
	if(count == 0) printf("yes\n");
	else printf("no\n");
	return 0;
}
