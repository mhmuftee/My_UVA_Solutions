#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main(void)
{   double pi=2*acos(0),area,r,r1,h1;
    int l,w,h,tetha,tetha2;

    while(scanf("%d %d %d %d",&l,&w,&h,&tetha)==4)
    {   if(tetha==90)area=0;
        else if(tetha==0)area=l*w*h;
        else {
            tetha2=90-tetha;
            r=(pi*tetha)/180;
            r1=(pi*tetha2)/180;
            h1=(l*sin(r))/sin(r1);

            if(h1<=h)
            {   area=.5*l*h1;
                area=l*h-area;
                area*=w;
            }
            else
            {
                tetha=90-tetha;
                tetha2=90-tetha;
                r=(pi*tetha)/180;
                r1=(pi*tetha2)/180;
                h1=(h*sin(r))/sin(r1);
                area=.5*h1*h*w;
            }
        }
        printf("%.3lf mL\n",area);
    }
    return 0;
}
