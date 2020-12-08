#include <stdio.h>

int main(){
	
	FILE *f = fopen("testdata.in", "r");
	char word[10];
	int num;
	int count = 0;
	while(!feof(f)){
		fscanf(f, "%[^#]#%d\n", word, &num);
		if(num % 10 == 1){
			count++;
		}
		else{
			while(num > 0){
				num /= 10;
				if(num % 10 == 1){
					count++;
					break;
				}
			}
		}
	}
	printf("%d\n", count);
	fclose(f);
	
	
	return 0;
}
