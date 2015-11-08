#include<cstdio>
#include<cmath>
#define max 1000
bool prime[max+5];
int prime_save[max+5];
int factor[1000005];
using namespace std;

void sieve()
{
    int i,n,sq=sqrt(max);
    for(i=0; i<=max; i++)
        prime_save[i]=0;
    prime_save[0]=2;
    for(i=4; i<=max; i+=2)
        prime[i]=1;
    n=1;
    for(i=3; i<=max; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=sq; j+=2*i)
                prime[j]=1;
            prime_save[n]=i;
            n++;
        }
    }
}

int main()
{
    sieve();

    int i,j,k,n,m,count=0;

    for(j=2; j<1000001; j++) {
        i=0;
        n=j;
        m=prime_save[i];
        while(n!=1 && m*m<=j && m!=0)
        {
            while(n%m==0)
            {
                n/=m;
                count++;
            }
            i++;
            m=prime_save[i];
        }
        if(n!=1)count++;
        factor[j]=count;
    }
    while(scanf("%d",&k)==1)
    {
        printf("%d\n",factor[k]);
    }
    return 0;
}
