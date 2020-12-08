#include <stdio.h>
#include <string.h>

int index = 0;

struct Product {
	char type [1010];
	char name [1010];
}; Product products [10010];

void swap (char a [1010], char b [1010]) {
	char temp [1010];
	strcpy (temp, a);
	strcpy (a, b);
	strcpy (b, temp);
}

int partition (int left, int right) {
	char pivot [1010]; char temp [1010];
	strcpy (pivot, products[right].type);
	int split = left - 1;
	
	for (int i = left; i <= right-1; i++) {
		if (strcmp (products[i].type, pivot) < 0) {
			split++;
			swap (products[i].type, products[split].type);
			swap (products[i].name, products[split].name);
		} else if (strcmp (products[i].type, pivot) == 0) {
			if (strcmp (products[i].name, products[right].name) < 0) {
				split++;
				swap (products[i].type, products[split].type);
				swap (products[i].name, products[split].name);
			}
		}
	}
	swap (products[split+1].type, products[right].type);
	swap (products[split+1].name, products[right].name);
	return split+1;
}


void quickSort (int left, int right) {
	int split;
	
	if (left < right) {
		split = partition (left, right);
		quickSort (left, split - 1);
		quickSort (split+1, right);
	}
}

int main () {
	
	FILE *file = fopen ("testdata.in", "r");
	
	while (!feof (file)) {
		fscanf (file, "%[^-]-%[^\n]\n", &products[index].type, &products[index].name);
		index++;
	}
	
	quickSort (0, index-1);
	
	
	for (int i = 0; i < index; i++) {
		if (i == 0) {
			printf ("%s:\n", products[i].type);
			printf ("%s\n", products[i].name);
		} else if (strcmp (products[i].name, products[i-1].name) == 0) {
			continue;
		} else if (strcmp (products[i].type, products[i-1].type) == 0) {
			printf ("%s\n", products[i].name);
		} else if (strcmp (products[i].type, products[i-1].type) != 0) {
			printf ("\n%s:\n", products[i].type); 
			printf ("%s\n", products[i].name);
		}
	}
	printf("\n");
	
	fclose (file);
	
	return 0;
}
