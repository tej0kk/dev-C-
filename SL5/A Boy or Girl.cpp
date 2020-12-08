#include <stdio.h>
#include <string.h>

int main(){
	
	char word[105];
	scanf("%s", &word);
	int length;
	length = strlen(word);
	
	int dictionary[105] = {0};
	//looping sebanyak length mulai dari 0
	int count = 0;
	for(int i=0; i<=length; i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
			dictionary[word[i]-'a'] = 1;
		}
	}
		for(int j=0; j<105; j++){
		if(dictionary[j] == 1){
			count++;
//			printf("%d\n", count);
		}
	}
		if(count % 2 == 0){
		printf("CHAT WITH HER!\n");
	}
	else{
		printf("IGNORE HIM!\n");
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	char name[105];
//	int length;
//	scanf("%s", &name);
//	length = strlen(name);
//	int chat=0;
//	for(int i=0; i<length; i++){
//		//lowercase == 97-122
//		if(name[i] > 96 && name[i] < 123){
////				if(length % 2 ==0){
////				printf("CHAT WITH HER!\n");
//				chat++;
//			}
//		}
//	}
//	if(chat % 2 == 0){
//		printf("IGNORE HIM!\n");
//	}
//	else if(chat & 2 == 1){
//		printf("CHAT WITH HER!\n");
//	}
//	return 0;
//}
