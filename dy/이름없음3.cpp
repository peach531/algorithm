#include<cstdio>

int a(int n)
{
	int q = (n - 2) * (n + 1) * n / 2;
	return q;
}
int b(int n)
{
	int w = (n * n *n) - (n-1) * (n - 1) * (n - 1);
	return w;
}
int c(int n)
{
	int e = (3 * n * n * n) - ((n * n) - (3 * n));
	return e;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(m == 1)
	{
		printf("%d",a(n));
	}
	else if(m == 2)
	{
		printf("%d",b(n));
	}
	else if(m == 3)
	{
		printf("%d",c(n));
	}
	
}
