#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int m,n,count=0;
		scanf("%d%d",&m,&n);
		if(m>n||m<100||n>999){
			printf("-1\n");
		}
		else for(int a=m;a<=n;a++){
			if (a == (a%10)*(a%10)*(a%10)+(a/10%10)*(a/10%10)*(a/10%10)+(a/100%10)*(a/100%10)*(a/100%10))
			{printf("%d ",a);
			count++;
			}
		}
		if(count==0){
			printf("-1");
		}
		printf("\n"); 
	}
	return 0;
}
