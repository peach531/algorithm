#include<cstdio>

int main()
{ 
	int H,M,T;
	scanf("%d %d %d",&H,&M,&T);
	M += T;
	H += M/60;
	M %= 60;
	H %= 24;
	printf("%d %d",H,M);
} 
