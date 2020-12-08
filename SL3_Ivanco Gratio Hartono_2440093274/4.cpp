#include <stdio.h>

int main(){
	
	int d;
	char coke;
	char sprite;
	char fanta;
	char tea;
	char coffee;
	printf("Choose your favorite beverages:\n");
	printf("1. Coke\n");
	printf("2. Sprite\n");
	printf("3. Fanta\n");
	printf("4. Tea\n");
	printf("5. Coffee\n");
	printf("Input 1-5 :");
	scanf("%d", &d);
	if(d == 1){
		printf("Coke\n");
	}
	else if(d == 2){
		printf("Sprite\n");
	}
	else if(d == 3){
		printf("Fanta\n");
	}
	else if(d == 4){
		printf("Tea\n");
	}
	else if(d == 5){
		printf("Coffee\n");
	}
	else{
		printf("Error\n");
	}
	return 0;
}
