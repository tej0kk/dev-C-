#include <stdio.h>

int main(){
	
	int cases, digit, number;
	scanf("%d", &cases);
	for(int i=0; i<cases; i++){
		scanf("%d %d", &digit, &number);
		if(digit == 1 && number == 1) printf("Case #%d: %dst\n", number);
		else if(digit == 1 && number == 2) printf("Case #%d: %dtf\n", number);
		else if(digit == 1 && number == 3) printf("Case #%d: %drd\n", number);
		else if(digit == 1 && number > 3 ) printf("Case #%d: %dth\n", number);
		else if(digit != 1){
			if(number % 10 == 1) printf("Case #%d: %dst\n", number);
		else if(number % 10 == 2) printf("Case #%d: %dtf\n", number);
		else if(number % 10 == 3) printf("Case #%d: %drd\n", number);
		else if(number % 10 > 3) printf("Case #%d: %dth\n", number);
		}
	}
	
	return 0;
}
