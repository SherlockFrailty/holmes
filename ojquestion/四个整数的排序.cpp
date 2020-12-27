#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);  

    for (i = 0; i < n; i++) {

        int a, b, c, d,temp;
        
        scanf("%d%d%d%d",&a,&b,&c,&d);
        
        if(a>b) {
        	temp = a;
        	a=b;
        	b=temp;
		}
		
		if(b>c){
			temp=b;
			b=c;
			c=temp;
			if(a>b){ 
				temp=a;
				a=b;
				b=temp;
			}			
		}
		
		if(c>d){
			temp=c;
			c=d;
			d=temp;
			if(b>c){
				
				temp=b;
				b=c;
				c=temp;
				if(a>b){
				
					temp=a;
					a=b;
					b=temp;
				}
			}
		}
		
		printf("%d %d %d %d\n",a,b,c,d); 

 

    }

   

    return 0;

}


