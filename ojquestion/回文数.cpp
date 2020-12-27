#include <stdio.h>
int checkNum(unsigned int num);
 
int main(void)
{
    unsigned int num;
    int n;
 
    scanf("%d",&n);
    
    int i;
    
    for(i=0;i<n;i++){
	
	scanf("%u",&num);
 
    if(checkNum(num)){
       printf("Yes\n");
    }else{
       printf("No\n",num);
    }
	}
    
 
    return 0;
}
int checkNum(unsigned int num)
{
#if 1
    unsigned int temp,newNum=0;
    temp=num;
 
    while(num)
    {
       newNum*=10;
       newNum=newNum+num%10;
 
       num/=10;
    }
    return temp==newNum;
#else
    //分别求出对应的前I位与后I位 比较是否相等
    int i,j,flag,befor_i,back_i,bitn=0;
    unsigned int  temp=num;
    //求数据位数
    do{
      bitn++;
      temp/=10;
    }while(temp);
 
    //
    for(i=1;i<=bitn/2;i++)
    {
        flag=1;
        for(j=1;j<i;j++)
        {
            flag*=10;
        }
        befor_i=num/flag%10;
        //
        flag=1;
        for(j=1;j<=(bitn-i);j++)
        {
            flag*=10;
        }
        back_i=num/flag%10;
 
        //printf("befor_i:%d back_i:%d\n",befor_i,back_i);
        if(befor_i!=back_i)
        {
            return 0;
        }
    }
    return 1;
#endif //
}
