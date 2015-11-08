#include<stdio.h>
#include<math.h>

int main()
{
    double a,n,b;

    while(scanf("%lf%lf",&n,&a)==2)
    {
        n=1.0/n;
        b=floor(pow(a,n)+.5);
        printf("%.0lf\n",b);
    }
    return 0;
}
