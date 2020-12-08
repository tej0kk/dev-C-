#include <stdio.h>
#include <string.h>

int main(){
    
    int cases;
    char input[1005];
    scanf("%d", &cases); getchar();
    for(int i=0; i<cases; i++){
        scanf("%[^\n]", input); getchar();
        int length = strlen(input);
        if(strstr(input, "Simon says ")){
            for(int j=11; j<length; j++){
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
