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
}//��n���������� 


int main(){
	int m,n;
	scanf("%d%d",&m,&n);//����m��n��ʾa��b�ĳ��� 
	
	int a[1000],b[1000];
	for(int j=0;j<(m+n);j++){
		if(j<m){
		scanf("%d",&a[j]);
		}
		else a[j]=0;
	}   //��a���и�ֵ����ʹa�����㹻���λ��������b����λ�ø�ֵΪ0 
	for(int k=0;k<n;k++){
		scanf("%d",&b[k]);
	}  //��b��ֵ 
	
	int *p=a;
	while(*p!=0){
		p++;
	}
	int i=0;
	while(i<(m+n)){
		*p=b[i];
		p++;
		i++;
	}   //��b����a���棻 
	
	shunxu (a,(m+n));//���� 
	
	for(int q=0;q<(m+n);q++){
		printf("%d ",a[q]);
	}//��� 
	
	return 0;
}
