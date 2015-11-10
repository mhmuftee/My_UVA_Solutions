#include<stdio.h>

int main() {
    double x1,y1,x2,y2,x3,y3,x,y,m1,m2,c1,c2,c3,c4;
    double a1,b1,a2,b2,a3,b3,a4,b4;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4)==8)
    {
        if(a1==a3 && b1==b3) {
            x2=a1;
            y2=b1;
            x1=a2;
            y1=b2;
            x3=a4;
            y3=b4;
        }
        if(a1==a4 && b1==b4) {
            x2=a1;
            y2=b1;
            x1=a2;
            y1=b2;
            x3=a3;
            y3=b3;
        }
        if(a2==a3 && b2==b3) {
            x2=a2;
            y2=b2;
            x1=a1;
            y1=b1;
            x3=a4;
            y3=b4;
        }
        if(a2==a4 && b2==b4) {
            x2=a2;
            y2=b2;
            x1=a1;
            y1=b1;
            x3=a3;
            y3=b3;
        }

        if(y1==y2 && x2==x3)printf("%.3lf %.3lf\n",x1,y3);
        else if(x1==x2 && y2==y3)printf("%.3lf %.3lf\n",x3,y1);
        else if(x1==x2 && y1>y2 && y2>0)printf("%.3lf %.3lf\n",x3,y3-y1+y2);
        else if(x1==x2 && y1>y2 && y2<0)printf("%.3lf %.3lf\n",x3,y1-y2+y3);
        else if(x1==x2 && y2>y1 && y1>0)printf("%.3lf %.3lf\n",x3,y3-y2+y1);
        else {
            m1=(y1-y2)/(x1-x2);
            c1=y1-m1*x1;

            m2=(y2-y3)/(x2-x3);
            c2=y3-m2*x3;
            c3=y3-m1*x3;
            c4=y1-m2*x1;
            x=(c4-c3)/(m1-m2);
            y=m1*x+c3;
            printf("%.3lf %.3lf\n",x,y);
        }
    }
    return 0;
}
