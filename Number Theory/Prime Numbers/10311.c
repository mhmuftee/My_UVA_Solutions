#include<stdio.h>
#include<math.h>
#define max 100000000
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

int main() {
    sieve();
    long int i,k,n,a,b,c,x,y;
    while(scanf("%lu",&n)!=EOF) {
        if(n%2==0)
        {
            k=0;
            if(n==2 || n==4 || n==6)printf("%lu is not the sum of two primes!\n",n);
            else
            {   b=(n/2);
                if(b%2==0)b=b;
                else b=b+1;
                for(i=b+1; i<n; i=i+2) {
                    if(prime[i]==1 && prime[n-i]==1) {
                        printf("%lu is the sum of %lu and %lu.\n",n,n-i,i);
                        break;
                    }
                }
            }
        }
        else
        {
            if(prime[n-2]==1)
                printf("%lu is the sum of 2 and %lu.\n",n,n-2);
            else
                printf("%lu is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
