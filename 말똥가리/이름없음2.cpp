#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	queue<int> q;
	cout << "<" ;
	for(int i = 1;i <= n;i++)
	{
		q.push(i);	
	}
	while(q.size()>1)
	{
		for(int i = 0;i<m-1;i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() <<", ";
		q.pop();
			
	}
	cout << q.front() << ">";	
}
