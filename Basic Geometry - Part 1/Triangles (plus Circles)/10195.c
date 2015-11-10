#include<stdio.h>
#include<math.h>
int main() {
    double a,b,c,p,q,r,s,x;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3) {
        s=0;
        r=0;
        s=(a+b+c)/2;
        if(a==0.0||b==0.0||c==0.0)printf("The radius of the round table is: %.3lf\n",r);
        else
        {

            p=s-a;
            q=s-b;
            x=s-c;
            if(s>=a&&s>=b&&s>=c) {
                r=sqrt((p*q*x)/s);
                printf("The radius of the round table is: %.3lf\n",r);
            }
            else
                printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
