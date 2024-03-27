#include<cstdio>

int main()
{
    int a;
    int count[10] = {0,};
    scanf("%d",&a);
    for (int i = 0;i < 8;i++)
    {
    	count[a % 10]++;
    	a /= 10;
	}
    count[6] += count[9] + 1;
	count[6] /= 2;
	count[9] = count[6];
	int uc = 0;
	for(int i = 0; i < 10;i++)
	{
		if(uc < count[i])
		uc = count[i];
		
	}
	printf("%d",uc);
	return 0;
}
