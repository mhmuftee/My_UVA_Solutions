#include<stdio.h>
#include<math.h>

long eular( long n)
{
    long i,s=n,m=0;
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
long divisor(long n)
{
    long i,div=0;
    if(n==1) return 1;
    for(i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            div+=2;
        }
    if((i-1)*(i-1)==n)div-=1;
    return div;
}

int main()
{
    long r,b,m;
    while(scanf("%ld",&r)==1 && r)
    {
        b=eular(r);
        m=divisor(r);
        r=r+1-m-b;
        printf("%ld\n",r);
    }
    return 0;
}
