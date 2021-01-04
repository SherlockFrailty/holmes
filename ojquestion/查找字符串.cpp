#include<stdio.h>
#define N 100
int identify_str(char* str1, char* str2)
{
    int i, j;
	bool flag;
    for (i = 0, j = 0; str1[i] != NULL; i++)
    {
        while (str1[i] == str2[j] && str1[i] && str2[j])
        {
            i++;
            j++;
            if(str2[j]==NULL)
			{
            	flag=1;
            	return flag;
			}
            } 
			j = 0;
        }
       return flag ;
    }
    
int main()
{
    int n;
    bool flag;
    scanf("%d",&n);
    char str1[N], str2[N]="SCU";
	for(;n>0;n--)
	{
	scanf("%s", str1);
    flag = identify_str(str1, str2);
    if(flag)
    printf("YES\n");
    else printf("NO\n");
    }
    return 0;
} 
