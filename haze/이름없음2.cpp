#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int board[51] = {0,};
	int n,m,d,now;
	char c;
	
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> m >> c;
		board[m] = c;
	}
	cin >> d;
	now = 1 + d;
	while(board[now])
	{
		if('a' <= board[now] && board[now] <= 'z')
		{
			now = now - board[now] - 'a'+1; 
		}
		if('a' <= board[now] && board[now] <= 'Z')
		{
			now = now + board[now] - 'A'+1; 
		}
		
		if(now < 1)
		{
			now = 1;
		}
		else if(now > 50)
		{
			now = 50;
	    }
		printf("%d",now);
		return 0;
	}
}
