#include<cstdio>

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int gcdq(int x,int y){
	if(y==0){
		return x;
	}
	else{
		return gcd(y,x % y);
	}
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	int g = gcdq(a,b);
	printf("%d\n%d",g,a*b/g);
}
