#include <stdio.h>
int main()
{
	float v,c;
	printf(
	"Enter value of trade:\n"
	"(more than $39)"
	);
	scanf("%f",&v);
	
	if(v<2500.00f)
	  c=30.00f+v*.017f;
	else if (v>=2500.00f && v<6250.00f)
	  c=56.00f+v*0.0066f;
	else if (v>=6250.00f && v<20000.00f)
	  c=76.00f+v*0.0034f	;
	else if (v>=20000.00f && v<50000.00f )
	  c=100.00f+v*0.0022f;
	else if (v>=50000.00f && v<500000.00f)
	  c=155.00f+v*0.0011f;
	else 
	  c=255.00f+v*0.0009f;
	  
	printf("commission:$%f",c);
	
	return 0;
	
}  
