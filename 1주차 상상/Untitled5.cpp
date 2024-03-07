#include<cstdio>

int main()
{
	int a,b,c,d,e;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%d",(a*a + b*b + c*c + d*d) % 10);
}
