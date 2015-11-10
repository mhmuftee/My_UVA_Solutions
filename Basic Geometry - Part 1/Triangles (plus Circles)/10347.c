#include<stdio.h>
#include<math.h>
int main() {
    double  a,b,c,d;
    double A,s,x,y,z;
    while (scanf("%lf %lf %lf",&a,&b,&c)==3) {
        A=-1;
        if(a>b)
            if(a>c)
                d=a;
            else
                d=c;
        else if(c>b)
            d=c;
        else
            d=b;

        if(a+b+c<=2*d)
            printf("%.3lf\n",A);
        else {
            x=(2*(sqrt(2*b*b+2*c*c-a*a)))/3;
            y=(2*(sqrt(2*a*a+2*c*c-b*b)))/3;
            z=(2*(sqrt(2*b*b+2*a*a-c*c)))/3;

            s=(x+y+z)/2;
            A=sqrt(s*(s-x)*(s-y)*(s-z));

            printf("%.3lf\n",A);
        }
    }
    return 0;
}
