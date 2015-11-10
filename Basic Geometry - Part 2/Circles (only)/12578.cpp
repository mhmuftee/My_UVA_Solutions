#include<cstdio>
#include<cmath>
using namespace std;
const double pi = 3.141592653589793;

int main()
{
    double length,width,radious;
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%lf",&length);

        width=(length*6)/10.0;
        radious=(length)/5.0;
        radious=pi*radious*radious;
        width=width*length-radious;
        printf("%.2lf %.2lf\n",radious,width);
    }
    return 0;
}
