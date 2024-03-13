#include<cstdio>

int main()

{
	int n,N,count,a,i;
	scanf("%d",&n);
	for(i = 1;i <= n; i++)
	{
		scanf("%d",&count);
		N += count;	
	}
	N /= n;
	if (N >= 80){	
		printf("easy");
    }
    else if(N >= 60){
    	printf("normal");
	}
	else{
		printf("hard");
	}
}
