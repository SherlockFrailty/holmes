#include<stdio.h>
int main()
{
int n;
while(~scanf("%d",&n))
{
int k;//k��������
for(k=2;k<n;k++)//��kֵ��ֵһ����С������2
{
 while(n!=k)
 {
 if(n%k==0)
{
 printf("%d*",k);
n=n/k;
 }
else 
break;//���������������ô����k++��������whileѭ����k++�� 
}
 }
 printf("%d\n",n);
} 
return 0;
}

