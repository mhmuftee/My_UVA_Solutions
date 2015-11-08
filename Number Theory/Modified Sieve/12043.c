#include<stdio.h>
#include<math.h>

int main() {
    long long i,j,a,b,d,n,m,sum,div,cas;

    scanf("%lld",&cas);
    while(cas--) {
        scanf("%lld %lld %lld",&a,&b,&d);
        sum=0;
        div=0;
        for(i=a;; i++)
            if(i%d==0)
            {
                a=i;
                break;
            }

        for(i=a; i<=b; i+=d)
        {
            int sq=(int)sqrt(i);
            for(j=1; j<=sq; ++j)
                if(!(i%j))
                {
                    sum+=j+i/j;
                    div+=2;
                }
            if((j-1)*(j-1)==i)
            {
                sum-=(j-1);
                div--;
            }

        }

        printf("%lld %lld\n",div,sum);
    }

    return 0;
}
