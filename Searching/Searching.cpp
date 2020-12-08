#include <stdio.h>


int linear_search(int* data, int size, int key){
	for(int i=0; i<size; i++){
		if(data[i] == key) return i;
	}
	return -1;
}

int binary_search(int* data, int left, int right, int key){
	int mid;

	if(right >= left){
		mid = ((right-left) / 2) + left;
		if(data[mid] == key) return mid;
		else if(data[mid] < key) return binary_search(data, mid+1, right, key);
		else if(data[mid] > key) return binary_search(data, left, mid-1, key);
	}
	return -1;
}

int main(){
//	int data[] = {21, 13, 11, 10, 25, 45, 78, 31};
	int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(data) / sizeof(data[0]);
	int found;

//	found = linear_search(data, size, 25);
	found = binary_search(data, 0, size-1, 10);
	if(found != -1) printf("Data found at index %d\n", found);
	else printf("Data not found\n");

	return 0;
}
