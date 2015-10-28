#include<stdio.h>
int main() {
    int i,cas;
    double C,CN,diff,F,FN;
    scanf("%d",&cas);
    for(i=0; i<cas; i++)
    {
        scanf("%lf %lf",&C,&diff);

        F=((9*C)/5)+32;
        FN=F+diff;
        CN=((FN-32)*5)/9;
        printf("Case %d: %.2lf\n",i+1,CN);
    }
    return 0;
}
