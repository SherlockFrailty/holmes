#include <stdio.h>

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int getPrimePair(int n)
{
    int i;
    if(n%2 == 0 && n>6) {
	for(i=2;i<=n/2;i++) {
        if(isPrime(i) && isPrime(n-i)) {
            printf("%d %d\n",i,n-i);
        }
    }      
    }
    else {printf("ERROR");
        return 0;
	}
		  
    return 1;  
}

main()
{
    long long int N;
    scanf("%d",&N);
    getPrimePair(N);
    return 0;
    
}
