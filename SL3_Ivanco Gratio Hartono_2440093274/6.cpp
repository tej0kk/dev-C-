#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	
	int number, user, guess;
	
	do{
		number = rand()%100 + 1;
		user = 0;
		guess = 0;
		
		do{
			printf("Input Your Guess Number:", number);
			scanf("%d", &user);
			getchar();
			guess++;
			
			if(user==number){
				printf("Nice Try, Your Answer is Correct\n");
				break;
			}
			else if(user>number){
				printf("Too High\n");
			}
			else if(user<number){
				printf("Too Low\n");
			}
			if(guess == 10){
				printf("You Have Used All Your Guess, Try Again\n");
			}
		}while(guess < 10);
	}while(1);
	
	return 0;
}
