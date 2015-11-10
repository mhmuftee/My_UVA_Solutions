#include<cstdio>
#include<cmath>
#define pi = acos(0.0)
using namespace std;
int main()
{
    double R1,R2,R3,s,T1,T2,T3;
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%lf %lf %lf",&R1,&R2,&R3);
        s = R1+R2+R3;
        s = s*(s-(R2+R3))*(s-(R1+R3))*(s-(R1+R2));
        s = sqrt(s);
        T1 = ((R1+R3)*(R1+R3)+(R1+R2)*(R1+R2)-(R2+R3)*(R2+R3))/(2.0*(R1+R3)*(R1+R2));
        T2 = ((R2+R3)*(R2+R3)+(R1+R2)*(R1+R2)-(R1+R3)*(R1+R3))/(2.0*(R2+R3)*(R1+R2));
        T3 = ((R2+R3)*(R2+R3)+(R1+R3)*(R1+R3)-(R1+R2)*(R1+R2))/(2.0*(R2+R3)*(R1+R3));
        T1 = acos(T1);
        T2 = acos(T2);
        T3 = acos(T3);
        T1 *= .5*R1*R1;
        T2 *= .5*R2*R2;
        T3 *= .5*R3*R3;
        T1 += T2+T3;
        s -= T1;
        printf("%lf\n",s);
    }
    return 0;
}
