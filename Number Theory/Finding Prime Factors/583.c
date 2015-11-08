#include<stdio.h>
#include<math.h>

int main() {
    long long int i,n;
    while(scanf("%lld",&n)==1 && n)
    {
        if(n==1)printf("1 =\n");
        else if(n==-1)printf("-1 = -1\n");
        else {
            printf("%ld = ",n);
            if(n<0) {
                n=-n;
                printf("-1 x ");
            }
            for(i=2; i<=sqrt(n);)
            {
                if(!(n%i)) {
                    printf("%lld x ",i);
                    n=n/i;
                }
                else
                    i++;
            }
            printf("%lld\n",n);
        }
    }
    return 0;
}
