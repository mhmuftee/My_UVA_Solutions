#include<stdio.h>
#include<math.h>

int prime(long int a)
{
    long int i,flag=0;
    for(i=2; i<=sqrt(a); i++)
        if(a%i==0)
        {
            flag=1;
            break;
        }
    if(flag==1) return 0;
    else return 1;
}
int main()
{

    long int i,j=0,c,d,n;
    while(scanf("%lu",&n)==1)
    {
        if(n==0)break;
        j=0;
        if(n!=1)
        {
            d=prime(n);
            if(d==1)j=1;
        }
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                c=prime(i);
                if(c==1)j++;
            }
        }
        printf("%lu : %lu\n",n,j);

    }
    return 0;
}
