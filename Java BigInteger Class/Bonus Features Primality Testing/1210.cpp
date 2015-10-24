#include<cstdio>
#include<cmath>
#define max 10000
bool pr[max+5];
int save[max+5];
int prime[max+5];
using namespace std;

int sieve()
{
    int i,j,k=0,n=sqrt(max);

    for(i=4; i<=max; i+=2)
        pr[i]=1;

    for(i=3; i<=n; i+=2)
        if(pr[i]==0)
            for(j=i*i; j<=max; j+=2*i)
                pr[j]=1;

    for(i=2,k=1; i<=max; i++)
    {
        if(pr[i]==0)
        {
            prime[k]=i;
            k++;
        }

        save[i]=0;
    }

    return k;
}

int main()
{
    int n=sieve();

    int i,j,s=0;
    for(j=1; j<n; j++)
    {
        s=0;
        for(i=j; i<n; i++)
        {
            s+=prime[i];
            if(s>max) break;
            save[s]++;

        }
    }
    int nn;

    while(scanf("%d",&nn)==1 && nn)
    {
        printf("%d\n",save[nn]);
    }

    return 0;
}
