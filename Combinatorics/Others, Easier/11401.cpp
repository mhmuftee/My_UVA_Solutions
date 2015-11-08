#include<stdio.h>

int main()
{
    unsigned long long int n,s;
    while(scanf("%llu",&n)==1 && n>2)
    {   s=0;
        if(n%2==0)
        {
            s=n*(n-2)*((2*n)-5);
            s/=24;
        }
        else
        {
            s=(n-1)*(n-3)*((2*n)-1);
            s/=24;
        }

        printf("%llu\n",s);
    }
    return 0;
}
