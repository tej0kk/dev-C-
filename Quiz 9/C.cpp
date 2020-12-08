#include <stdio.h>
#include <string.h>

int N, M;

// cr yg paling kecil
int min(int x, int y, int z){
	if(x < y && x < z) return x;
	else if(y < x && y < z) return y;
	else return z;
}

int total(char *word1, char *word2, int N, int M){
	int temp = 1;
	if(N == 0) return M;
	else if(M == 0) return N;
	else{
		if(word1[N-1] != word2[M-1]) temp = 1;
		else temp = 0;
		return min(total(word1, word2, N-1, M)+1,
			total(word1, word2, N, M-1)+1,
			total(word1, word2, N-1, M-1)+temp);
	}
}

int main(){
	int cases;
	scanf("%d", &cases); getchar();
	char word1[13]; char word2[13];
	for(int i=0; i<cases; i++){
		scanf("%s %s", &word1, &word2);
		N = strlen(word1); M = strlen(word2);
		printf("Case #%d: ", i+1);
		printf("%d\n", total(word1, word2, N, M));
	}
	return 0;
}
