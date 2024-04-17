#include<cstdio>

int main()
{
	char str[1000];
	int n;
	scanf("%d %s",&n,str);
	for(int i = 0; str[i];i++)
	{
		str[i] += n;
		if(str[i] > 'Z')
		{
			str[i] -= 26;
	    }
	    printf("%c",str[i]);
	}
}
