#include<stdio.h>
#include<math.h>
#define max 10000000
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
    long int i,k,n,a,b,c,x,y,F,G;
    while(scanf("%lu",&n)!=EOF)
    {
        if(n<8)printf("Impossible.\n");
        else if(n%2==0)
        {
            b=(n/2);
            if(b%2==0)
            {
                b=b;
                for(i=2; i<=b/2; i=i+1)
                {
                    if(prime[i]==1 && prime[b-i]==1)
                    {
                        printf("%lu %lu %lu %lu\n",b-i,b-i,i,i);
                        break;
                    }
                }
            }
            else
            {
                n=b-1;
                b=b+1;

                for(i=2; i<=b/2; i++)
                {
                    if(prime[i]==1 && prime[b-i]==1)
                    {
                        printf("%lu %lu ",b-i,i);
                        break;
                    }
                }
                for(i=2; i<=n/2; i++)
                {
                    if(prime[i]==1 && prime[n-i]==1)
                    {
                        printf("%lu %lu\n",n-i,i);
                        break;
                    }
                }
            }
        }
        else
        {
            b=n-5;

            for(i=2; i<=b/2; i++)
            {
                if(prime[i]==1)
                    if(prime[b-i]==1)
                    {
                        printf("2 3 %lu %lu\n",i,b-i);
                        break;
                    }
            }
        }
    }
    return 0;
}

