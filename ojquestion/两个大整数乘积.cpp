#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;
#define Max 1000
int main()
{
    char a[Max],b[Max];
    int c[Max],d[Max],e[Max];
    int a1,a2;
    while(cin>>a>>b)
    {
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        memset(e,0,sizeof(e));
        a1=strlen(a);
        a2=strlen(b);
 
        
        int x=0;
        for(int i=a1-1; i>=0; i--)
        {
            c[x]=a[i]-48;
            x++;
        }
 
        x=0;
        for(int i=a2-1; i>=0; i--)
        {
            d[x]=b[i]-48;
            x++;
        }
 
        
        for(int i=0; i<a1; i++)
        {
            for(int j=0; j<a2; j++)
            {
                e[i+j]+=(c[i]*d[j]);
            }
        }
 
        
        for(int j=0; j<Max; j++)
        {
           
            if(e[j]>=10)
            {
                e[j+1]+=e[j]/10;
                e[j]%=10;
            }
        }
 
        int i;
        
        for(i=Max-1; i>=0; i--)
        {
            if(e[i]!=0)
                break;
        }
 
        printf("%s * %s = ",a,b);
    
        for(; i>=0; i--)
        {
            printf("%d",e[i]);
        }
        printf("\n");
    }
    return 0;
}
