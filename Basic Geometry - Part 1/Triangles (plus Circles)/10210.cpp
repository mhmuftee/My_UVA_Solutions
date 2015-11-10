#include<cstdio>
#include<cmath>

using namespace std;

int main(void)
{
    double xa,ya,xb,yb,deg1,deg2;
    double pi=2*acos(0);

    while(scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&deg1,&deg2)==6)
    {
        double dis=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
        dis=sqrt(dis);
        deg1=(pi*deg1);
        deg1/=180;
        deg2=(pi*deg2);
        deg2/=180;
        double a=dis/tan(deg1);
        double b=dis/tan(deg2);
        a=a+b;
        printf("%.3lf\n",a);
    }
    return 0;
}
