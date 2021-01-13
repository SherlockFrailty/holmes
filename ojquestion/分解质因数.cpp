#include<stdio.h>
int main(){
	int n,N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&n);
		
		for(int k=2;k<n;k++){
			while(k!=n){
				if(n%k==0){
				printf("%d*",k);
				n=n/k;
			}
			else
			break;
		    }
		}
		printf("%d\n",n);
	
	}

	return 0;
}
