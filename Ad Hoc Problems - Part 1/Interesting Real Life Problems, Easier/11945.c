#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    double a,b,c;
    for(i=1; i<=n; i++)
    {
        a=0;
        for(j=1; j<=12; j++)
        {
            scanf("%lf",&b);
            a+=b;
        }
        a/=12;
        printf("%d $",i);
        b=a/1000;
        b=floor(b);
        if(b>0)
        {

            printf("%.0lf,",b);
            a=a-b*1000;
        }
        printf("%.02lf\n",a);
    }
    return 0;
}
