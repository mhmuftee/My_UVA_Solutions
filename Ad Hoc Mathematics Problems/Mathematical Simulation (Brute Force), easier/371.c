#include<stdio.h>

int main()
{
    long int i,j,n=0,a,b,x,y,k;
    long int c(long int i);
    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
        n=0;
        j=0;
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
            {
                n=k;
                j=i;
            }
        }
        printf("Between %lu and %lu, %lu generates the longest sequence of %lu values.\n",x,y,j,n);
    }
    return 0;
}

long int c(long int i)
{
    long int k=0,m=0;;
    while(1)
    {
        if(i%2==0)
            i=i/2;
        else
            i=3*i+1;
        if(i>100) m++;
        k++;
        if(i==1)
            break;
    }
    return k;
}
