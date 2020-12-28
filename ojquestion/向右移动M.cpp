#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main() {
	char str1[200] = { '\0' };
	int M, i, a;

	scanf("%d\n", &M);

	int len = 0;
	while ((str1[len] = getchar()) != '\n')len++;
	for (i = 0; i < len; i++)
	{
		printf("%c", str1[(len - M + i) % len]);
	}

	return 0;


}

