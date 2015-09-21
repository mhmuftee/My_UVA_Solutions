#include<stdio.h>
long int ff(long int a)
{
    long int sum=0;
    while(a)
    {
        sum+=a%10;
        a/=10;
    }
    if(sum>=10) return ff(sum);
    
        return sum;
}

int main()
{
    long int a,b;
    while(scanf("%lu",&a)!=EOF)
    {
        if(a==0)
            break;
        b=ff(a);
        printf("%lu\n",b);
    }

    return 0;
}
