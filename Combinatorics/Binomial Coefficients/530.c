#include<stdio.h>

int main()
{
    long long int n,k,r,f,g,temp;
    int i,j;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        if(n==0 && k==0) break;
        g=1;
        if(k>n/2)
        {
            k=n-k;
        }
        for(i=n,j=1; i>k,j<=k; i--,j++)
        {
            g*=i;
            g/=j;
        }
        printf("%lld\n",g);
    }
    return 0;
}
