#include<stdio.h>
double fact(int);
int i,x,n,r;
double f=1,a,b,c,p;
int main()
{
    while(scanf("%d %d",&n,&r))
    {
        if(n==0&&r==0)break;
        a=fact(n);
        printf("%.01lf\n",a);
        b=fact(r);
        c=fact(n-r);
        p=a/(b*c);
        printf("%d things taken %d at a time is %.0lf exactly.\n",n,r,p);
    }
    return 0;
}
double fact(int x)
{
    f=1;
    for(i=1; i<=x; i++)
        f*=i;
    return(f);
}
