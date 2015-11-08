#include<stdio.h>
#include<math.h>
#define max 32770
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
    int i,n,count;
    while(scanf("%d",&n)==1 && n)
    {
        count=0;

        if(n==4)count=1;
        for(i=3; i<=n/2; i+=2)
            if(prime[i]==1)
                if(prime[n-i]==1)
                    count++;
        printf("%d\n",count);
    }
    return 0;
}
