#include<stdio.h>
#include<math.h>
#define max 999999
char prime[max+5];
void sieve()
{
    long int i,j;
    for(i=2; i<=max; i++)prime[i]=1;
    for(i=2; i<=sqrt(max);)
    {
        if(prime[i]==1)
            for(j=2*i; j<=max; j=j+i)
            {
                prime[j]=0;
            }
        i++;
    }
}

int main()
{
    sieve();
    int i,n;
    while(scanf("%d",&n)==1 && n)
    {
        if(n==6)
            printf("6 = 3 + 3\n");
        for(i=3; i<n/2; i+=2)
            if(prime[i]==1)
                if(prime[n-i]==1)
                {
                    printf("%d = %d + %d\n",n,i,n-i);
                    break;
                }
    }
    return 0;
}
