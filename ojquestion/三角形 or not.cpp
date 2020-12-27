#include <stdio.h>	
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){	
	int a, b, c, temp;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a <= 0 || b <= 0 || c <= 0 || b + c <= a)
	printf("No\n");
	
	if (a*a == b*b + c*c)
		printf("Yes\n");
	else printf("No\n");
	}

	return 0;
}

