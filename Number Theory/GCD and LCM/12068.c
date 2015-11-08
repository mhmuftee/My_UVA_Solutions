#include<stdio.h>

long long gcd(long long a,long long b)
{
    if(b==0)return a;
    else
        return gcd(b,a%b);
}

int main() {
    int S,N,i,j;
    int a[10];
    unsigned long long mean,upper,lower,g;
    scanf("%d",&S);
    for(j=1; j<=S; j++)
    {   mean=1;
        lower=0;
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {   scanf("%d",&a[i]);
            mean=mean*a[i];
        }

        for(i=0; i<N; i++)
            lower=lower+mean/a[i];

        upper=mean*N;

        g=gcd(upper,lower);

        printf("Case %d: %lld/%lld\n",j,upper/g,lower/g);
    }
    return 0;
}
