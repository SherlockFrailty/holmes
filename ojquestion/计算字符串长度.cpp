#include<stdio.h>
#include<string.h>

int main(){
	char a[]={"\0"};
	int i=0,ch;
	while((ch=getchar())!='\n'){
		a[i++]=ch;
	}
	printf("%d",strlen(a));
	return 0;	
}
