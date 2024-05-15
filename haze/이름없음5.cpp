#include<cstdio>
#include<iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int,int> score[10001];
	pair<int,int> max;
	
	int n,t,a,result;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> t >> a;
		score[i] = make_pair(t,a);
	}
	for(int i = 0;i<n;i++)
	{
		if(max < score[i])
		{
			max = score[i];
			result = i;
		}
	}
	printf("%d",result+1);
	
}
