#include<stdio.h>
int main(){
	int n;
	int flag[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	    flag[i]=1;
	    else flag[i]=0;
	}
	
	for(int i=0;i<n;i++){
		if(flag[i]==1)
		printf("Yes\n");
		else printf("No\n");
	}
	
	return 0;
}
