#include <stdio.h>
#include <string.h>

int main(){
    
    char word[100];
    scanf("%[^\n]", word);
    int length = strlen(word);
    for(int i=0; i<length; i++){
        if(word[i] >= 'A' && word[i] <= 'Z') printf("%c",word[i]);
    }
    
    
    return 0;
}
