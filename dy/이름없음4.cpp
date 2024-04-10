#include<cstdio>

int find(int p,int t)
{
	if(t==0){
		return 0;
	}
	else{
		return Find(tp[p],t - 1);
	}
}

int main()
{
	int n,p,t;
	int tp[1000];
	scanf("%d %d %d",&n,&p,&n);
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d",tp[i]);
	}
	printf("%d",find(p,t));
}
