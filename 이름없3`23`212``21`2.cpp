#include<cstdio>

int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		int n;
		scanf("%d",&n);
		int quar,dine,nick,penny;
		quar = n/25;
		n -= quar*25;
		dine = n/10;
		n -= dine*10;
		nick = n/5;
		n -= nick*5;
		penny = n/1;
		n -= penny*1;
		printf("%d %d %d %d \n",quar,dine,nick,penny);
	}
}
