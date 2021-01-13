#include<stdio.h>

void shunxu(int a[1000],int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<=i;j++){
		int temp=0;
		if(a[i]>a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp; 
		}
		
		}
	}
}//对n个数字排序 


int main(){
	int m,n;
	scanf("%d%d",&m,&n);//输入m、n表示a和b的长度 
	
	int a[1000],b[1000];
	for(int j=0;j<(m+n);j++){
		if(j<m){
		scanf("%d",&a[j]);
		}
		else a[j]=0;
	}   //对a进行赋值，并使a留出足够多的位置来复制b，空位置赋值为0 
	for(int k=0;k<n;k++){
		scanf("%d",&b[k]);
	}  //对b赋值 
	
	int *p=a;
	while(*p!=0){
		p++;
	}
	int i=0;
	while(i<(m+n)){
		*p=b[i];
		p++;
		i++;
	}   //将b接在a后面； 
	
	shunxu (a,(m+n));//排序 
	
	for(int q=0;q<(m+n);q++){
		printf("%d ",a[q]);
	}//输出 
	
	return 0;
}
