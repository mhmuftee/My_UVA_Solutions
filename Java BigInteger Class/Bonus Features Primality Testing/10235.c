#include<stdio.h>
#include<math.h>
int prime(long int a)
{
    long int i,flag=0,m=sqrt(a);
    for(i=2; i<=m; i++)
        if(a%i==0)
        {
            flag=1;
            break;
        }
    if(flag==1) return 0;
    else return 1;
}
long int reverse(long int a)
{
    long int b;
    b=0;
    while(1)
    {
        b=b*10+a%10;
        if(a<10)break;
        a=a/10;
    }
    return b;
}
int main()
{
    long int i,j,k,n;
    while(scanf("%lu",&n)==1)
    {
        i=0;


        i=prime(n);

        if(i==1)
        {
            j=reverse(n);
            if(j==n) printf("%lu is prime.\n",n);
            else

            {
                k=prime(j);
                if(k==1)
                    printf("%lu is emirp.\n",n);
                else
                    printf("%lu is prime.\n",n);
            }
        }
        else printf("%lu is not prime.\n",n);

    }

    return 0;
}
