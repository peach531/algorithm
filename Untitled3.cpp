#include<cstdio>

int is_prime[101];

int main(){
	int n;
	scanf("%d",&n);
	for(int i =0;i<=100;i++){
		is_prime[i] = 1;
	}
	is_prime[0] = 0;
	is_prime[1] = 0;

	for(int i = 2;i<=n;i++){
		if(is_prime[i]){
			for(int j = i*i;j<=n;j+=i){
				is_prime[j] = 0;
			}
		}
	}
	
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		
		for(int i = 2;i<=n/2;i++){
			if(is_prime[i]&&is_prime[n-i]){
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}
		}
	}
	
}
