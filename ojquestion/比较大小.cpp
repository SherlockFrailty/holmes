#include <stdio.h>
int main()
{
	int a,b,c,d,max,min;
	
	printf("Enter four integers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				max=a;
				printf("Largest:%d",max);
			}
			else {
				max=d;
				printf("Largest:%d",max);
			}
		}
		else if(a<c){
			if(c>d){
				max=c;
				printf("Largest:%d",max);
			}
			else{
				max=d;
				printf("Largest:%d",max);
			}
		}
	} 
	else {
	if(b>c){
		if(b>d){
			max=b;
			printf("Largest:%d",max);
		}
		else{
			max=d;
			printf("Largest:%d",max);
		}
	}
	else {
		if(c<d){
			max=d;
			printf("Largest:%d",max);
		}
		else{
			max=c;
			printf("Largest:%d",max);
		}
	}
	}
	
	return 0;
	
	
	
 
}
