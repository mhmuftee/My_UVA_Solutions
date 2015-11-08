#include<stdio.h>
#include<math.h>
int main()
{
    double n,dx,cel,bi,m;
    double array[101];
    int i,a,cas,b;
    for(i=1; i<=100; i++)
        array[i]=i*i*i;
    while(scanf("%lf",&n)==1)
    {
        a=(int)n;
        if(a==0)break;
        cas=0;
        dx=0;
        b=0;
        n=n+0.000001;
        for(i=1; i<=100; i++)
            if(n==array[i])
            {
                printf("%d.0000\n",i);
                cas=1;
                break;
            }
        if(cas==0)
        {
            b=pow(n,1.0/3.0);

            dx=(n-b*b*b)/(3*b*b);

            n=b+dx;
            printf("%.4lf\n",n);
        }
    }
    return 0;
}
