#include<stdio.h>
#include<math.h>
int main() {
    int i,n;
    float d,v,u;
    float o,t1,t2;
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        scanf("%f %f %f",&d,&v,&u);
        if(v>=u)
            printf("Case %d: can't determine\n",i);
        else {
            o=sqrt(u*u-v*v);

            t1=d/o;
            t2=d/u;

            if(t1-t2<=0)printf("Case %d: can't determine\n",i);
            else
                printf("Case %d: %.3f\n",i,t1-t2);
        }
    }
    return 0;
}
