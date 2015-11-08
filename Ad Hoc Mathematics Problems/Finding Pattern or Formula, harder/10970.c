#include<stdio.h>

int main()
{
    long int a,b,x;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        x=a*b;
        x=x-1;
        printf("%ld\n",x);
    }
    return 0;
}
