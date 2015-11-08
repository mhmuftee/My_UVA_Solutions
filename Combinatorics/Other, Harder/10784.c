#include<stdio.h>
#include<math.h>

int main() {

    double a,b,c,n,x;
    long int i=0;
    while(scanf("%lf",&n)==1)
    {
        if(n==0)break;
        i++;
        a=1;
        b=3;
        c=2*n;
        x = ceil((b + sqrt(b*b + 4*a*c)) / 2*a);
        printf("Case %ld: %.0lf\n",i,x);
    }
    return 0;
}
