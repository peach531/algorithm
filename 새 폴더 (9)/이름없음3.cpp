#include<cstdio>

int main()
{
	char str[1000];
	int count[26] = {0,};
	scanf("%s",&str);
	for(int i = 0; str[i] ;i++)
	{
		 if('A' <= str[i] && str[i] <= 'Z'){
		 	str[i] = str[i] - 'A' + 'a';
		 }
		 count[str[i] - 'a']++;
	}
	for(int i = 0; i< 26;i++)
	{
		printf("%d",count[i]);
	}
}
