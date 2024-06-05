#include<cstdio>
#include<stack>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    char s[51];
    for(int i = 0; i < t;i++){
    	scanf("%s",s);
    	stack<char> ps;
    	
    	for(int j = 0 ;s[j];j++)
    	{
        	if(ps.empty())
        	{
            	ps.push(s[j]);  
        	}
        	else if(ps.top() == '(' && s[j] == ')')
        	{
            	ps.pop();       
        	}
        	else
        	{
            	ps.push(s[j]);
        	}
		}		
		if(ps.empty())
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}		
}
