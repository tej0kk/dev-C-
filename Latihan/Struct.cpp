#include <stdio.h>

struct time{
	int hour;
	int minute;
	int second;
};

int absolute(int n){
	return (n < 0) ? (n * -1) : n;
}

int secondDiff(time t1, time t2){
	int result;
	
	int detik1 = t1.second + t1.hour*60*60 + t1.minute*60;
	int detik2 = t2.second + t2.hour*60*60 + t2.minute*60;
	
	result = detik1 - detik2;
	result = absolute(result);
	return result;
}
int main(){
	
	time t1, t2;
	scanf("%d:%d:%d %d:%d:%d",
		&t1.hour, &t1.minute, &t1.second, 
		&t2.hour, &t2.minute, &t2.second);
		
	printf("%d\n", secondDiff(t1, t2));
	
	
	return 0;
}
