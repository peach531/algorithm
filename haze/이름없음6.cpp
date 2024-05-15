#include<cstdio>
#include<utility>
#include<iostream>
using namespace std;

int main()
{
	pair<int,int> ban[51][51];
	pair<int,int> temp;
	int n,m,s,h;
	
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			cin >> s >> h;
			ban[i][j] = make_pair(s,h);
		}
	}
	int q,w,e,r;
	scanf("%d %d",&q,&w);
	scanf("%d %d",&e,&r);
	temp = ban[q][w];
	ban[q][w] = ban[e][r];
	ban[e][r] = temp;
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j < m;i++)
		{
			printf("%d %d",ban[i][j].first,ban[i][j].second);
		}
		printf("\n");	
	} 
}
