#include<stdio.h>
#include<math.h>
int main() {
    double x1,y1,x2,y2,x3,y3,xc,yc;
    double a,b,c,d,e,f,i,g,h,k,s,r,D,p,x,y;
    while (scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF) {
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
        r=k/2;
        D = 2*( x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
        xc=((y1*y1 + x1*x1)*(y2 - y3) + (y2*y2 + x2*x2)*(y3 - y1) + (y3*y3 + x3*x3)*(y1- y2)) / D;
        yc= ((y1*y1 + x1*x1)*(x3 - x2) + (y2*y2 + x2*x2)*(x1 - x3) + (y3*y3 + x3*x3)*(x2 - x1)) / D ;
        if(xc<0) {
            x=-xc;
            printf("(x + %.3lf)^2 +",x);
        }
        else
            printf("(x - %.3lf)^2 +",xc);
        if(yc<0) {
            y=-yc;
            printf(" (y + %.3lf)^2",y);
        }
        else
            printf(" (y - %.3lf)^2",yc);
        printf(" = %.3lf^2\n",r);

        printf("x^2 + y^2");
        if(xc<0)
        {
            xc=-xc;
            printf(" + %.3lfx",xc*2);
        }
        else
            printf(" - %.3lfx",xc*2);
        if(yc<0)
        {
            yc=-yc;
            printf(" + %.3lfy ",yc*2);
        }
        else
            printf(" - %.3lfy ",yc*2);
        p=xc*xc+yc*yc-r*r;
        if(p<0) {
            p=-p;
            printf("- %.3lf = 0\n",p);
        }
        else
            printf("+ %.3lf = 0\n",p);
        printf("\n");
    }
    return 0;
}
