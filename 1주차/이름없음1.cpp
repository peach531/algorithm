#include <cstdio>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char C; int I; long long L; double D; char S[100];
	scanf("%c %d %lld %lf %s",&C,&I,&L,&D,S);
	printf("%s %lf %lld %d %c",S,D,L,I,C);
	return 0;
}
