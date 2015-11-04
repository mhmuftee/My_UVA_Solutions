#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double V,V0;

    while(scanf("%lf %lf",&V,&V0)==2 && V && V0)
    {
        double result=0;
        int max,x=0;
        if(V<=V0) max=0;
        else
        {
            for(int i=1;; i++)
            {
                double VV=V/double(i);
                if(VV<=V0)break;

                double length=i*.3*sqrt(VV-V0);

                if(fabs(result-length)<1e-12)
                    x=1;
                if(x==1)break;

                if(length>result)
                {
                    result=length,max=i;
                }
            }
        }
        if(max && !x)
            printf("%d\n",max);
        else
            printf("0\n");

    }

    return 0;
}
