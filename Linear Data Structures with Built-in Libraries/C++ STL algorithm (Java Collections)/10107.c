#include<stdio.h>
int main()
{
    unsigned long long int s,i,j,k=0,t,n,a,b,c[10010];
    i=0;
    n=0;
    while(scanf("%llu",&b)!=EOF)
    {
        k=i-1;
        while((b<c[k]) && (k>=0))
        {
            c[k+1]=c[k];
            --k;
        }
        c[k+1]=b;

        ++i;

        a=i/2;
        if(i%2==0)
            s=(c[a]+c[a-1])/2;
        else
            s=c[a];

        printf("%llu\n",s);

    }
    return 0;
}
