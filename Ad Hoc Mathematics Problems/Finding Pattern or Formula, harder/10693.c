#include<stdio.h>
#include<math.h>

int main(void)
{
    double L,f,v,V,a,b;

    while(scanf("%lf %lf",&L,&f)==2 && L && f)

    {
        a=L*f*2;
        v=sqrt(a);

        b=2*L;
        V=(v*3600)/b;

        printf("%.8lf %.8lf\n",v,V);

    }

    return 0;
}
