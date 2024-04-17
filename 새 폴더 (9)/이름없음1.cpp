#include<cstdio>

int main()
{
	char str[1000];
	scanf("%[^\n]",str);
	for(int i = 0;str[i];i++){
		if('a' <= str[i] && str[i] <= 'z'){
			str[i] = str[i] - 'a' + 'A';
		}
	}
	printf("%s",str);
	return 0;
}
