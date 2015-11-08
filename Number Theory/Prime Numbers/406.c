#include<cstdio>
#include<cmath>
using namespace std;
#define max 1005
bool pr[max+5];
int prime[max+5];
void sieve()
{
    int i,j,sq=sqrt(max);
    for(i=4; i<=max; i+=2)
        pr[i]=1;
    for(i=3; i<=sq; i+=2)
    {
        if(pr[i]==0)
            for(j=i*i; j<max; j+=2*i)
                pr[j]=1;
    }
    prime[0]=1;
    prime[1]=2;
    for(j=2,i=3; i<=max; i+=2)
        if(pr[i]==0)
            prime[j++]=i;
}
int main()
{
    sieve();
    int N,C,index[max];
    while(scanf("%d %d",&N,&C)==2)
    {
        printf("%d %d:",N,C);
        int j=0;
        for(int i=0;; i++)
            if(prime[i]<=N)
                index[j++]=prime[i];
            else
                break;
        C*=2;
        if(j%2)
            C-=1;
        if(C>j)
        {
            for(int i=0; i<j; i++)
                printf(" %d",index[i]);
            printf("\n");
        }
        else
        {
            N=(j-C)/2;
            for(int i=N; i<N+C; i++)
                printf(" %d",index[i]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
