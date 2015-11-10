#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(void)
{
    char s[5];
    double rad,arc,cord,rad2,a,deg2,deg;
    int d,R=6440;
    double pi=2*acos(0);

    while(scanf("%d %lf %s",&d,&deg,&s)==3)
    {
        d+=R;
        if(!(strcmp(s,"min")))
            deg=deg/60;
        if(deg>180.0)
            deg=360-deg;

        rad=(pi*deg)/180;
        arc=d*rad;

        if(deg==180)
            cord = 2 * d;
        else
        {
            deg2=180-deg;
            deg2/=2;
            rad2=(pi*deg2)/180;
            cord=(sin(rad)*d)/sin(rad2);
        }
        printf("%.6lf %.6lf\n",arc,cord);
    }
    return 0;
}
