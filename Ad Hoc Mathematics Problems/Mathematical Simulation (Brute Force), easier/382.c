#include<stdio.h>
#include<math.h>

int main(void)
{
    long i,n,s;

    printf("PERFECTION OUTPUT\n");

    while(scanf("%ld",&n)==1)
    {
        if(!n)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        s=0;
        for(i=1; i<=sqrt(n); i++)
            if(n%i==0)
            {
                s=s+i+n/i;
                if(i==n/i)
                    s=s-i;
            }
        s=s-n;
        if(s==n)printf("%5d  PERFECT\n",n);
        else if(s<n)printf("%5d  DEFICIENT\n",n);
        else printf("%5d  ABUNDANT\n",n);
    }
    return 0;
}
