#include<cstdio>

int main()
{
	int a,b,c,d,sum;
	scanf("%1d %1d %1d %1d",&a,&b,&c,&d);
	sum = a + b + c + d;
    if(sum == 3) printf("A");
    else if(sum == 2) printf("B");
    else if(sum == 1) printf("C");
    else if(sum == 0) printf("D");
    else if(sum == 4)  printf("E");
}
