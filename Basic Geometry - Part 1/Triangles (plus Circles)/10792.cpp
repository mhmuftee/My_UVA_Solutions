#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r,d,h1,h2,ab,a,b,o;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&r,&d,&h1);

        ab=2*sqrt((pow(r,2)-pow((r-d),2)));
        a=asin((r-h1)/r);
        b=asin((r-d)/r);
        o=a-b;
        h2=h1+ab*sin(o);
        printf("Case %d: %.4lf\n",i,h2);
    }
    return 0;
}
