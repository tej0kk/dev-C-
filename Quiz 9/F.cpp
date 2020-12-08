#include <stdio.h>

//catur vertical itu angka menurun dari 8 dan horizontal huruf
int checklist[8][8];
void pawn(char catur[][8], int j, int k){
	if(catur[j-1][k-1] >= 'a' && catur[j-1][k-1] >= 'z') checklist[j-1][k-1]++;
	if(catur[j-1][k+1] >= 'a' && catur[j-1][k+1] >= 'z') checklist[j-1][k+1]++;
}

void rook(char catur[][8], int j, int k){
	int row = 0;
	int col = 0;
	while(col < 8){
		if(catur[j][col] >= 'a' && catur[j][col] <= 'z'){
//			if(row < 8 && row >= 0){
				checklist[j][col] = 1;
			break;
//			}
		}
		if(catur[j][col] >= 'A' && catur[j][col] <= 'Z'){
			break;
		}
		col++;
	}
	while(row < 8){
		if(catur[row][k] >= 'a' && catur[row][k] <= 'z'){
//			if(col < 8 && col >= 0){
				checklist[row][k] = 1;
				break;
//			}
			
		}
		if(catur[row][k] >= 'A' && catur[row][k] <= 'Z'){
			break;
		}
		row++;
	}
	row = j;
	while(row >= 0){
		if(catur[row][k] >= 'a' && catur[row][k] <= 'z'){
//			if(row < 8){
				checklist[row][k] = 1;
				break;
//			}
		}
		if(catur[row][k] >= 'A' && catur[row][k] <= 'Z'){
			break;
		}
		row--;
	}
	col = k;
	while(col >= 0){
		if(catur[j][col] >= 'a' && catur[j][col] <= 'z'){
//			if(col < 8){
				checklist[j][col] = 1;
				break;
//			}
		}
		if(catur[j][col] >= 'A' && catur[j][col] <= 'Z'){
			break;
		}
		col--;
	}
	
}

void bishop(char catur[][8], int j, int k){
	int row = 1;
	int col = 1;
	while(j-row >= 0 && k-col >= 0){
		if(catur[j-row][k-col] >= 'a' && catur[j-row][k-col] <= 'z'){
			checklist[j-row][k-col] = 1;
			break;	
		}
		if(catur[j-row][k-col] >= 'A' && catur[j-row][k-col] <= 'Z'){
//			checklist[j-row][k-col] = 1;
			break;	
		}
		row++; col++;
	}
		row = 1;
		col = 1;
	while(j-row >= 0 && k+col < 8){
		if(catur[j-row][k+col] >= 'a' && catur[j-row][k+col] <= 'z'){
			checklist[j-row][k+col] = 1;
			break;	
		}
		if(catur[j-row][k+col] >= 'A' && catur[j-row][k+col] <= 'Z'){
//			checklist[j-row][k+col] = 1;
			break;	
		}
		row++; col++;
	}
		row = 1;
		col = 1;
	while(j+row < 8 && k+col <8){
		if(catur[j+row][k+col] >= 'a' && catur[j+row][k+col] <= 'z'){
			checklist[j+row][k+col] = 1;
			break;	
		}
		if(catur[j+row][k+col] >= 'A' && catur[j+row][k+col] <= 'Z'){
//			checklist[j+row][k+col] = 1;
			break;	
		}
		row++; col++;
	}
		row = 1;
		col = 1;
	while(j+row < 8 && k-col >= 0){
		if(catur[j+row][k-col] >= 'a' && catur[j+row][k-col] <= 'z'){
			checklist[j+row][k-col] = 1;
			break;	
		}
		if(catur[j+row][k-col] >= 'A' && catur[j+row][k-col] <= 'Z'){
//			checklist[j+row][k-col] = 1;
			break;	
		}
		row++; col++;
	}
}

void queen(char catur[][8], int j, int k){
	rook(catur, j, k);
	bishop(catur, j, k);
	return;
}

void king(char catur[][8], int j, int k){
	if(catur[j-1][k-1] >= 'a' && catur[j-1][k-1] >= 'z') checklist[j-1][k-1]++;
	if(catur[j-1][k] >= 'a' && catur[j-1][k] >= 'z') checklist[j-1][k]++;
	if(catur[j-1][k+1] >= 'a' && catur[j-1][k+1] >= 'z') checklist[j-1][k+1]++;
	if(catur[j][k-1] >= 'a' && catur[j][k-1] >= 'z') checklist[j][k-1]++;
	if(catur[j][k+1] >= 'a' && catur[j][k+1] >= 'z') checklist[j][k+1]++;
	if(catur[j+1][k-1] >= 'a' && catur[j+1][k-1] >= 'z') checklist[j+1][k-1]++;
	if(catur[j+1][k] >= 'a' && catur[j+1][k] >= 'z') checklist[j+1][k]++;
	if(catur[j+1][k+1] >= 'a' && catur[j+1][k+1] >= 'z') checklist[j+1][k+1]++;
}

void knight(char catur[][8], int j, int k){
	if(catur[j-1][k-2] >= 'a' && catur[j-1][k-2] >= 'z') checklist[j-1][k-2]++;
	if(catur[j-1][k+2] >= 'a' && catur[j-1][k+2] >= 'z') checklist[j-1][k+2]++;
	if(catur[j-2][k-1] >= 'a' && catur[j-2][k-1] >= 'z') checklist[j-2][k-1]++;
	if(catur[j-2][k+1] >= 'a' && catur[j-2][k+1] >= 'z') checklist[j-2][k+1]++;
	if(catur[j+1][k-1] >= 'a' && catur[j+1][k-1] >= 'z') checklist[j+1][k-1]++;
	if(catur[j+1][k+1] >= 'a' && catur[j+1][k+1] >= 'z') checklist[j+1][k+1]++;
	if(catur[j+2][k-1] >= 'a' && catur[j+2][k-1] >= 'z') checklist[j+2][k-1]++;
	if(catur[j+2][k+1] >= 'a' && catur[j+2][k+1] >= 'z') checklist[j+2][k+1]++;
}

void makan(char catur[][8]){
	for(int j=0; j<8; j++){
		for(int k=0; k<8; k++){
			if(catur[j][k]=='P') pawn(catur, j, k);
			else if(catur[j][k]=='R') rook(catur, j, k);
			else if(catur[j][k]=='B') bishop(catur, j, k);
			else if(catur[j][k]=='Q') queen(catur, j, k);
			else if(catur[j][k]=='K') king(catur, j, k);
			else if(catur[j][k]=='N') knight(catur, j, k);
		}
	}
}

void hasil(){
	for(int j=0; j<8; j++){
		for(int k=0; k<8; k++){
			if(checklist[j][k] == 1) printf("%c %d\n", k+'A',8-j);
		}
	}
}
int main(){
	int cases;
	scanf("%d", &cases); getchar();
	for(int i=0; i<cases; i++){
		char catur[8][8];
		for(int j=0; j<8; j++){
			for(int k=0; k<8; k++){
				scanf("%c", &catur[j][k]);
			}
			getchar();
		}
		for(int j=0; j<8; j++){
			for(int k=0; k<8; k++){
				checklist[j][k] = 0;
			}
		}
//		for(int j=0; j<8; j++){
//			for(i nt k=0; k<8; k++){
//				if(checklist[j][k] != 0) printf("*");
//				else printf("0");
//			}
//			printf("\n");
//		}
		makan(catur);
		hasil();
//		for(int j=0; j<8; j++){
//			for(int k=0; k<8; k++){
//				printf("%c", catur[j][k]);
//			}
//			printf("\n");
//		}
	}
	
	return 0;
}
