#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string s;
	stack<int> mod;
	cin >> s;
	for(int i = 0; s[i];i++)
	{
		if('0' <= s[i] && s[i] <= '9')
		{
			mod.push(s[i] - '0');
		}
		else
		{
			int a = mod.top();
			mod.pop();
			int b = mod.top();
			mod.pop();
			if(s[i] == '+')
			{
				mod.push(b+a);
			}
			else{
				mod.push(b-a);
			}
		}
	}
	cout << mod.top();
}
