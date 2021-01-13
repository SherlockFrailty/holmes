#include<stdio.h>
int main()
{
int n;
while(~scanf("%d",&n))
{
int k;//k代表质数
for(k=2;k<n;k++)//给k值赋值一个最小的质数2
{
 while(n!=k)
 {
 if(n%k==0)
{
 printf("%d*",k);
n=n/k;
 }
else 
break;//如果不能整除，那么就让k++（先跳出while循环在k++） 
}
 }
 printf("%d\n",n);
} 
return 0;
}

