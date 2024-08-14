#include<cstdio>

int main(){
	int c;
	scanf("%d",&c);
	
	while(c--){
		int n,sum = 0;
		int score[101] = {0,};
		scanf("%d",&n);
		for(int i = 0;i < n;i++){
			scanf("%d",&score[i]);
			sum+=score[i];
		}
		float avg = (double)sum/n;
		int count = 0;
		for(int i = 0;i < n;i++){
			if(avg<score[i]){
				count++;
			}
		}
		printf("%.3f%%\n",(double)count * 100/n);
	}
	
}
