#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",b);
        }
    }
    return 0;
}
