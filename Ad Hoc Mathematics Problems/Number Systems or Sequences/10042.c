#include<stdio.h>
#include<math.h>
int sum(long long int a)
{
    int sum=0;
    while(1)
    {
        sum=sum+a%10;
        if(a<10)
        {
            break;
            sum=sum+a;
        }
        a=a/10;
    }
    return sum;
}

int smith(long long n)
{
    long long a=0,i,s=0;
    for(i=2; i<=sqrt(n);)
    {
        if(n==1)break;
        if(n%i==0)
        {
            a++;
            if(i>10)s=s+sum(i);
            else
                s=s+i;
            n=n/i;
        }
        if(n%i!=0)i++;
    }
    if(n>10)n=sum(n);
    s=s+n;
    if(a!=0)
        return s;
    else
        return 0;
}
int main()
{

    unsigned long long int i,m,a,b,c;
    scanf("%llu",&m);
    for(i=0; i<m; i++)
    {
        scanf("%llu",&a);
        b=0;
        c=0;
        if(a<3)printf("4\n");
        else
        {
            while(1)
            {
                a++;
                b=sum(a);
                c=smith(a);
                if(b==c)break;
            }
            printf("%llu\n",a);
        }
    }
    return 0;
}




