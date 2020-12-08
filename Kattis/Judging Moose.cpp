#include <stdio.h>

int main(){
    
    int left, right;
    scanf("%d %d", &left, &right);
    int temp = 0; int temp1 = 0;
    
    if(left == right && left != 0 && right !=0){
        right+=left;
        printf("Even %d\n", right);
    }
    
    else if(left != right){
        if(right - left < 0) temp = left - right;
        else temp = right-left;
//        printf("%d\n", temp);
        temp1 = right + left;
//        printf("%d,%d\n", temp, temp1);
        printf("Odd %d\n", temp+temp1);
    } 
    if(left == 0 && right == 0) printf("Not a moose\n");
    return 0;
}
