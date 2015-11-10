#include<stdio.h>
#include<math.h>
int main() {
    double a,b,c,s,A,Ex,In,d,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3) {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        d=(a*b*c)/(4*A);
        Ex=3.141592653589793*d*d;
        r=A/s;
        In=3.141592653589793*r*r;
        Ex=Ex-A;
        A=A-In;
        printf("%.4lf %.4lf %.4lf\n",Ex,A,In);
    }
    return 0;
}
