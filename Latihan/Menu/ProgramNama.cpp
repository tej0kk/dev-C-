#include <stdio.h>
#include <string.h>
int main(){
	int input;
	char name[105] = {"\0"};
	int length;
	char inisial[10];
	int x;
	
		while(1){
		printf("Welcome to This Program\n");
		printf("1. Insert Your Name\n");
		printf("2. Update Your Name\n");
		printf("3. View Your Name\n");
		printf("4. Delete\n");
		printf("5. Exit\n");
		break;
		}
	do{
		do{
			printf("Choose: ");
			scanf("%d", &input); getchar();
			x++;
		}while(input < 0 && input < 6);
		
		switch(input){
			case 1:
				do{
					printf("Insert Your Name: ");
					scanf("%[^\n]", &name);
					length = strlen(name);
//					for(int i=0; i<length; i++){
//						if((name[i] >= 'a' && name[i] <= 'z') && name[i+1] == ' ' && (name[i+2] >= 'a' && name[i+2] <= 'z')){
//							inisial
//						}
					}while(length == 0);
			break;
			
			case 2:
				do{
					if(length == 0) printf("Name is Not Available\n");
					printf("Update Your Name: ");
					length = 0;
					gets(name);
					length = strlen(name);
				}while(length == 0);
			break;
			
			case 3:
//				printf("%d", length);
				do{
					if(length == 0) printf("Name is Not Available\n");
					else if(length != 0) printf("Nama: %s\n", name);
				}while(length != 0 && length == 0);
			break;
			
			case 4:
				do{
					if(length == 0) printf("Name is Not Available\n");
					else if(length != 0) length = 0;
				}while(length != 0);
			break;
			
			case 5:
				printf("Thank You for Using This Simple Program");
				return 0;
		}
	}while(1);
	
	
	return 0;
}
