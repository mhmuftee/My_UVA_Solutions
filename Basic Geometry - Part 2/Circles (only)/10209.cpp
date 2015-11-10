#include<cstdio>
#include<cmath>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    double a;
    while(scanf("%lf",&a)==1)
    {
        double s=a*a-(a*a*pi)/4;
        double d=a*a-2*s;
        double x=.5*a*a*((2*pi/3)-sin((2*pi/3)))-d;
        double f=s-2*x;
        d=a*a-4*f-4*x;
        printf("%.3lf %.3lf %.3lf\n",d,4*f,4*x);
    }
    return 0;
}
