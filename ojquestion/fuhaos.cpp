#include <stdio.h>
int main()
{
	int a,b,c,d;
	float e;
	printf("Enter item mumber:");
	scanf("%d",&d);
	printf("Enter unit price:");
	scanf("%f",&e);
	printf("Enter a date (mm/dd/yyyy):");
	scanf("%2d/%2d/%4d",&a,&b,&c);
	
	
	printf(
	"Item           Unit            Purchase\n"
	"               Price           Date\n"
	"%d             $%6.2f         %2d/%2d/%4d\n ",d,e,a,b,c
	);
	return 0;
}
