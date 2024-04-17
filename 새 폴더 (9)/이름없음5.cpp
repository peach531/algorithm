#include<cstdio>

int main()
{
	char str[1000];
	int witch[26];
	scanf("%s",str);
	for(int i = 0;i < 26;i++)
	{
		witch[i] = -1;
	}
	for(int i = 0;str[i];i++)
	{
		if(witch[str[i] - 'a'] == -1)
		{
			witch[str[i] - 'a'] = i;
		}
	}
	for(int i = 0;i < 26; i++)
	{
		printf("%d ",witch[i]);
	}
}
