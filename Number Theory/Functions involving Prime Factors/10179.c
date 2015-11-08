#include<stdio.h>
#include<math.h>

long long eular(long long n)
{
    long long i,s=n,m=0;
    if(n==1) return 1;
    for(i=2; i<=sqrt(n);)
    {
        if(n%i==0)
        {
            n=n/i;
            m=1;
        }
        if(n%i!=0)
        {
            if(m)
            {
                s=s/i;
                s*=(i-1);
            }
            i++;
            m=0;
        }
    }
    s=s/n;
    if(n>1) s*=(n-1);
    return s;
}
int main()
{
    long long r,b;
    while(scanf("%lld",&r)==1 && r)
    {
        b=eular(r);
        printf("%lld\n",b);
    }
    return 0;
}
