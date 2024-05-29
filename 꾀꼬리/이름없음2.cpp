#include<iostream>
#include<algorithm>
using namespace std;
 
bool cmp(int left,int right)
{
	return left > right;
}
int main()
{
	int data[10];
	for(int i = 0; i < 10;i++)
	{
		cin >> data[i];
	}
	sort(data,data+10);
	for(int i = 0;i < 10;i++)
	{
		cout << data[i] << " ";
	}
	cout << "\n";
	sort(data,data + 10,cmp);
	for(int i = 0;i < 10;i++)
	{
		cout << data[i] << " ";
	}
}
