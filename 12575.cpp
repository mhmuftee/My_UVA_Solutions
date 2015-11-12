#include<cstdio>
#include<cmath>
using namespace std;

int main()
{

    double max,z;
    long  cas;
    double A,B;
    scanf("%ld",&cas);
    while(cas--)
    {
        scanf("%lf %lf",&A,&B);
        z=atan2(A,B);
        if(A<0) z+=2*acos(-1);

        printf("%.2lf %.2lf\n",z,sqrt(A*A+B*B));
    }
    return 0;
}
