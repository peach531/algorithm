#include<cstdio>

int main()
{
	int a[10];
	int b[10];
	int i;
	for(i = 0; i < 10; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < 10; i++){
		scanf("%d",&b[i]);
	}
	int A,B;
	for(i = 0; i < 10; i++){
		if (a[i] > b[i]){
			A++;
		}
		else if(a[i] < b[i]){
			B++;
		}
	}
	if (A > B){
		printf("A win");
	}
	else if(B > A){
		printf("B win");
	}
	else{
		printf("draw");
	}
}
