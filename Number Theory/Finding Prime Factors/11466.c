#include<stdio.h>
#include<math.h>

int main() {

    long long int i,j,k,n,a;

    while(scanf("%lld",&n)==1 && n)
    {
        j=0;
        if(n==1)printf("-1\n");
        else {
            if(n<0)n=-n;

            for(i=2; i<=sqrt(n);)
            {
                if(!(n%i))
                {   if(!j)k=i;
                    j++;
                    n=n/i;
                }
                else
                    i++;
            }

            if(!j || k==n)printf("-1\n");
            else
                printf("%lld\n",n);
        }
    }

    return 0;
}

