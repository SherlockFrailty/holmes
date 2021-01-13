#include<stdio.h>
int main(){
	int num, len=0, i=0, a[30];
	scanf("%d", &num);
	do{
		a[len]=num%2;
		num = num / 2;
		len++;
	}while(num);
	for (i=0; i<len; i++)		printf("%d", a[len-1-i]);
	printf("\n");
	return 0;
}
