#include <stdio.h>		
void p() {
	char ch = getchar();
	if (ch != '\n') {
		p();
		putchar(ch);
	}
}
int main(void)	
{
	p();		
	printf("\n");
	return 0; 					
}
