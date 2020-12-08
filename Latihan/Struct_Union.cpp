#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct student{
	char name[20];
	int age;
	float gpa;
};

union student_union{
	char name[20];
	int age;
	float gpa;
};

int linearSearch(int searchValue, int *arr, int index){
	for(int i=0; i<index; i++){
		if(arr[i] == searchValue) return i;
	}
	return -1;
}

int binarySearch(int searchValue, int l, int r, int *arr2){
	int m = (r+l) / 2;
	if(r >= l){
		if(arr2[m] == searchValue) return m;
		else if(arr2[m] < searchValue) return binarySearch(searchValue, m+1, r, arr2);
		else return binarySearch(searchValue, l, m-1, arr2);
	}
	return -1;
}	
int main(){
	int x;
	student student1 = {"Budi", 20, 3.4};
	printf("Name : %s\n", student1.name);
	printf("Age : %d\n", student1.age);
	printf("GPA : %f\n", student1.gpa);
	
//	student_union student2;
//	student2.gpa = 4;
//	student2.age = 15;
//	strcpy(student2.name, "Dodi");
//	printf("Name : %s\n", student2.name);
//	printf("Age : %d\n", student2.age);
//	printf("GPA : %d\n", student2.gpa);
	
	//linear search
	int arr[] = {3, 5, 1, 10, 8, 15, 11};
	int size = sizeof(arr) / sizeof(arr[0]);
	int idx = linearSearch(1, arr,  size);
	if(idx == -1) printf("Value 1 tidak ada di array\n");
	else printf("value 1 ada di index %d\n", idx);
	
	//binary search
	int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
	int size1 = sizeof(arr2) / sizeof(arr2[0]);
	printf("idx: %d\n", binarySearch(21, 0, size1-1, arr2));
	
//	student students[40];
//	students[0].age = 5;
//	scanf("%d", &students[0].age);
	
	srand(time(NULL));
	
	printf("%d", rand()%4);
	
/*
sorting -> sort array
file proc -> read(cr apakah ada extisting data), write(save datanya ke txt lagi)
struct -> array of struct
searching -> binary struct(array harus urut)
*/
	return 0;
}
