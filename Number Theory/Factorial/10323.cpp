#include<stdio.h>
int main()
{
    long long int fact=1;
    long int n,i,k;
    while(scanf("%lu",&n)!=EOF)
    {
        if(n>0)
        {
            fact=1;
            if(n>13)
                printf("Overflow!\n");
            else if(n<8)
                printf("Underflow!\n");
            else
            {
                for(i=1; i<=n; i++)
                {
                    fact=fact*i;
                }
                printf("%llu\n",fact);
            }
        }
        else
        {
            k=n%2;
            if(k==-1)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
        }
    }
    return 0;
}
