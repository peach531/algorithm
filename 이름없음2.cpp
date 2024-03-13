#include<cstdio>

int main(){

	int n,count,i,Ai[10000],Bi[10000];
	
	count = 0;

	scanf("%d",&n);

	for(i = 0; i < n; i++){
		scanf("%d",&Ai[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d",&Bi[i]);
		if(Ai[i] == Bi[i]){
			count++;
		}
	}
	printf("%d",count);
	
}
