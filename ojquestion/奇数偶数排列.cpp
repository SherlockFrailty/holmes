#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int q=0;q<n;q++){
		int a[1000];
		int ch,temp,b=0;
		do{
			scanf("%d",&a[b]);
			ch = a[b];
			b++;
		}while((ch=getchar())!='\n');
		
		for (int i = 1; i<=b; i++) {
		    for (int j = 0; j<b-i; j++) {
		        if (a[j]>a[j+1]) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                } 
            }
        }
        for (int i = 0; i<b; i++) {
            for (int j = 0; j<b; j++) {
                if (a[j]%2==0&&a[j+1]%2!=0) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        for (int i = 0; i<b; i++) {
            printf("%d ",a[i]);
        }
        printf("\n");
	}

	return 0;
}
