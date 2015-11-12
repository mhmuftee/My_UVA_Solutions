#include<cstdio>
#include<cmath>
#define MAX 1000005
using namespace std;
int prime[1005],divisor[MAX+5],n,div[MAX];
bool pr[1005];
void seive()
{
    int i,n;
    for(i=0; i<=1000; i++)
        prime[i]=0;
    prime[0]=2;
    for(i=4; i<=1000; i+=2)
        pr[i]=1;
    pr[1]=1;
    pr[2]=0;
    n=1;
    for(i=3; i<=100; i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i; j<=1000; j+=2*i)
                pr[j]=1;
        }
    }

    for(i=3; i<1000; i+=2)
        if(pr[i]==0)
            prime[n++]=i;
}
void divisor_s()
{
    int i,j,sum,m,pow;
    div[0]=1;
    div[1]=1;
    div[2]=2;
    div[3]=3;
    divisor[1]=1;
    for(j=4; j<=MAX; j+=2)
    {
        m=j;
        sum=1;
        pow=0;
        for(i=0; prime[i]*prime[i]<=j && prime[i];)
        {
            while(m%prime[i]==0 && m!=1)
            {
                m=m/prime[i];
                pow++;
            }
            i++;
            sum*=(pow+1);
            pow=0;

        }
        if(m!=1)
            sum*=2;
        divisor[j]=sum;
        if(divisor[j]>=divisor[div[j-2]])
            div[j]=div[j+1]=j;
        else
            div[j]=div[j+1]=div[j-2];
    }
}
int main()
{
    seive();
    int i,j;
    divisor_s();
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&j);
        printf("%d\n",div[j]);
    }

    return 0;
}
