#include<stdio.h>

int main()
{
    long int i,j,n=0,a,b,x,y,k;
    long int c(long int i);
    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        n=0;
        if(a>b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        for(i=x; i<=y; i++)
        {
            k=c(i);
            if(k>n)
                n=k;
        }
        printf("%lu %lu %lu\n",a,b,n);
    }
    return 0;
}

long int c(long int i)
{
    long int k=1;
    while(i!=1)
    {
        if(i%2==0)
            i=i/2;
        else
            i=3*i+1;
        k++;
    }
    return k;
}
