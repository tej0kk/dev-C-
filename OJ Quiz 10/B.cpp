#include <stdio.h>
#include <math.h>

int main(){
	int arr;
	FILE *file = fopen("testdata.in", "r");
//	if(!file){
//		printf("Error! Opening FIle");
//	}
	int index = 0;
	int total = 0;
	while (!feof(file)){
		fscanf(file, "%d\n", &arr);
		double temp = sqrt(arr);
		int temp1 = temp;
//		printf("%lf %d\n", temp, temp1);
		if(temp1-temp == 0){
//			printf("akar");
			total -= arr;
		}
		else{
			total += arr;
		}
		index++;
	}
	printf("Special sum of %d datas is %d.\n", index, total);
	index = 0;
	total = 0;
	fclose;
	return 0;
}
