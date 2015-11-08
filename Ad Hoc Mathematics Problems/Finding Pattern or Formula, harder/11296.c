#include<stdio.h>

int main()
{
    long long n;
    while(scanf("%lld",&n)==1 )
    {

        n=n/2+1;
        long  long s=0;
        for(long  long i=0; i<=n; i++)
            s+=i;

        printf("%lld\n",s);
    }
    return 0;
}
