#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,d,e,f,i,g,h,k,s;

    while (scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        d=(x1-x2);
        e=(y1-y2);
        f=(x2-x3);
        g=(y2-y3);
        i=(x3-x1);
        h=(y3-y1);
        a=d*d+e*e;
        b=f*f+g*g;
        c=i*i+h*h;
        a=sqrt(a);
        b=sqrt(b);
        c=sqrt(c);
        s=(a+b+c)/2;
        k=2*sqrt(s*(s-a)*(s-b)*(s-c));
        k=(a*b*c)/k;
        k=3.141592653589793*k;
        printf("%.2lf\n",k);
    }
    return 0;
}
