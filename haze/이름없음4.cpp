#include<cstdio>
#include<iostream>
#include<utility>
using namespace std;

struct student
{
	int id,c,a;
	string s;
};
int main()
{
	int n,id,c,a,m;
	string s,t;
	cin >> n;
	student p[10001];
	
	for(int i = 0;i < n;i++)
	{
		cin >> id >> s >> c >> a;
        p[i].id=id;
		p[i].s=s;
		p[i].c=c;
		p[i].a=a;
	}
	
	cin >> m;
	for(int i = 0;i<m;i++){
		cin >> t;
		for(int j=0;j<n;j++){

			if(p[j].s == t)
			{
				printf("%d %d %d",p[j].id,p[j].c,p[j].a);
			}
		}
		printf("\n");
	}
		
} 
