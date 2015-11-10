#include<stdio.h>
#include<math.h>
int main() {

    long i,n;
    double a,b,x=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf",&a,&b);
        x=(b/2)*(b/2)-(a/2)*(a/2);

        x=sqrt(x);
        b=b/2;
        x=3.141592653589793*x*b;
        printf("%.3lf\n",x);
    }
    return 0;
}
