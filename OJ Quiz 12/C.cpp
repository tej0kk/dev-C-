#include <stdio.h>

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
	
	
	return 0;
}
