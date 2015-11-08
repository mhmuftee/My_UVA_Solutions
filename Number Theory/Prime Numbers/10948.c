#include<stdio.h>
#include<math.h>
#define max 1000000
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
        if(n==0)break;
        if(n%2==0)
        {
            k=0;
            if(n==4 || n==6)printf("%lu:\n%lu+%lu\n",n,n/2,n/2);
            else
            {   b=(n/2);
                if(b%2==0)b=b;
                else b=b+1;
                for(i=n-1; i>=b; i=i-2) {
                    if(prime[i]==1 && prime[n-i]==1) {
                        printf("%lu:\n%lu+%lu\n",n,n-i,i);
                        break;
                    }
                }
            }
        }
        else
        {
            if(prime[n-2]==1)
                printf("%lu:\n2+%lu\n",n,n-2);
            else
                printf("%lu:\nNO WAY!\n",n);
        }
    }
    return 0;
}
