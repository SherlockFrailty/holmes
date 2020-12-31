#include <stdio.h>
int main()
{
	float a,b,c,d,max;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	max=a>b?a:b;
	max=max>c?max:c;
	max=max>d?max:d;
	printf("%f",max);
	
	return 0;
	
 } 
