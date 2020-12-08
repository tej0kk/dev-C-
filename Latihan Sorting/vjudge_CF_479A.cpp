#include <stdio.h>

int main(){
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int arr[6] = {0};
	arr[0] = a+b*c;
	arr[1] = a*(b+c);
	arr[2] = a*b*c;
	arr[3] = (a+b)*c;
	arr[4] = a+b+c;
	arr[5] = a*b+c;
	for(int i=0; i<6; i++){
		for(int j=1; j<6-i; j++){
			if(arr[j-1] < arr[j]){
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%d\n", arr[0]);
	
	return 0;
}
