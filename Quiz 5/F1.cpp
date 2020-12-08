#include <stdio.h>
int a, last_fibo = 0;
long fibo[100000];
long long int input;
long long int t;

long long int j, number, fibo1 = 1, fibo2 = 1, nextFibo;
void fibonacci(){
	long c = 0;
	for(long long int i=input; i>=0; i--){
		fibo1=1;fibo2=1;nextFibo=0;
		for(j=1; j<=input-i; j++){
        	nextFibo = fibo1 + fibo2;
        	fibo1 = fibo2;
        	fibo2 = nextFibo;
    	}
    
  	fibo[c] = fibo1;
  	c++;
    }
}

void hasil_fibonacci(){
	last_fibo = 0;
	for(int i=0; i<input; i++){
		a = fibo[i] + last_fibo;
		last_fibo =a;
//		printf("%d--", fibo[i]);
	}
}

int main() {
  scanf("%d", &t);
  for(int i=0; i<t; i++){
  	scanf("%d", &input);
  	fibonacci();
  	hasil_fibonacci();
  	printf("Case #%d: %d", i+1, a);
  	printf("\n");
  }
  return 0;
}
