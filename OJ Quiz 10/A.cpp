#include <stdio.h>

int main(){
	int arr;
	int count;
	long long int sum = 0;
	double mean = 0;
	int min = 1000000;
	int max;
	int range;
	int index = 0;
	FILE *file = fopen("testdata.in", "r");
//	if(!file){
//		printf("Error! Opening FIle");
//	}
	while (!feof(file)){
		fscanf(file, "%d\n", &arr);
		sum += arr;
		if(arr < min) min = arr;
		if(arr > max) max = arr;
		index++;
	}
//	count = index;
//	for(int i=0; i<index; i++){
//		sum += arr[i];
//		
////		printf("%d\n", arr[i]);
//	}
	mean = (double)sum/index;
	range = max-min;
	printf("Count : %d\n", index);
	printf("Sum   : %d\n", sum);
	printf("Mean  : %.2lf\n", mean);
	printf("Min   : %d\n", min);
	printf("Max   : %d\n", max);
	printf("Range : %d\n", range);
//	printf("Count\t: %d\n", index);
//	printf("Sum\t: %d\n", sum);
//	printf("Mean\t: %.2lf\n", mean);
//	printf("Min\t: %d\n", min);
//	printf("Max\t: %d\n", max);
//	printf("Range\t: %d\n", range);
	fclose;
	
	return 0;
}
