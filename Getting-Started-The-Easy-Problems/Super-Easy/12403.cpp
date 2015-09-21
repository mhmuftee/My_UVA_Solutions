#include<stdio.h>
#include<string.h>

int main()
{
    char c[1000],d[100];
    long i,j,n,cas,amo,total;
    total=0;
    scanf("%ld",&cas);
    getchar();

    while(cas--)
    {
        gets(c);

        n=sscanf(c,"%s %ld",&d,&amo);
        if(n==2)
        total+=amo;
        else
        printf("%ld\n",total);

    }
    return 0;
}
