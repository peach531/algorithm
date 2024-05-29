#include<iostream>
#include<algorithm>
using namespace std;

int strong(pair<int,int> p)
{
	return p.first*p.second*p.second;
}

bool cmp(pair<int,int> left, pair<int,int> right)
{
	return strong(left) > strong(right);
}
int main()
{
	pair<int,int> p[100001];
	int n,m,v;
	cin >> n;
	for(int i = 0;i<n;i++)
	{
		cin >> m >> v;
		p[i] = make_pair(m,v);
	}
	sort(p,p+n,cmp);
	for(int i = 0;i<3;i++)
	{
		cout << p[i].first << " " << p[i].second;
		cout << "\n";
	}
}
