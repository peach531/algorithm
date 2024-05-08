#include<cstdio>
#include<string.h>

int main()
{
	char str[1001];
	int check = 0;
	int len = strlen(str);
	for(int i = 0; i < len/2;i++)
	{
		if(str[i] != str[len - 1 - i])
		{
			check = 1;
			break;
		}
	}
}
