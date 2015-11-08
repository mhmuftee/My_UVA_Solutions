#include<stdio.h>
#include<math.h>

int main() {

    long long int i,n;

    while(scanf("%lld",&n)==1 )
    {   if(n<0)break;
        for(i=2; i<=sqrt(n);)
        {
            if(n%i==0) {
                printf("    %lld\n",i);
                n=n/i;
            }
            if(n%i!=0)i++;
        }
        printf("    %lld\n\n",n);

        i=0;
    }
    return 0;
}
