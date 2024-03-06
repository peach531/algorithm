#include<cstdio>

int main()
{
	int H;
	int M;
	int S;
	int T;
	
	scanf("%d %d %d",&H,&M,&S);
	scanf("%d",&T);
	S -= (T % 60);
	if(S < 0)
	{
		S += 60;
		M --;
    }
	M -= ((T / 60) % 60);
	H -= ((T / 60) / 60);
	if(M < 0)
	{
		M += 60;
		H --;
	}
	printf("%d %d %d",H,M,S);
	return 0;
}
