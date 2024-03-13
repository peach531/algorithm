#include<cstdio>

int main(){
	long long n;
	int count = 0,a=0;
	scanf("%lld",&n);
	while(n >= 10){
		a=0;
		while(n){
			a += n%10;
		    n/=10;
	    }
	    n = a;
	    count++;
	    
	}
	printf("%d",count);
	
}
