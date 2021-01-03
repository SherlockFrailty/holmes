#include<stdio.h>
int main()
{
	int i,j;
    char a[i][j];
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{if((i+j)%2==0)
		a[i][j]={'B'};
		else
		a[i][j]={'R'};
		}
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%c\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
