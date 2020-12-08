#include <stdio.h>

int main(){

char name[105];
double gpa;
scanf("%s %lf", &name, &gpa);

printf("%s finished this semester with \"%.2lf\" GPA. Congratulations!", name, gpa);

return 0;
}
