#include<stdio.h>
struct hole
{
    double x;
    double y;
};
typedef struct hole h;

int main() {
    int i,n,f;
    double dx,dy,gx,gy,gh,dh;
    h a[10001];
    while(scanf("%d %lf %lf %lf %lf",&n,&gx,&gy,&dx,&dy)!=EOF) {
        f=0;
        for(i=0; i<n; i++)
        {
            scanf("%lf %lf",&a[i].x,&a[i].y);

        }

        for(i=0; i<n; i++)
        {
            dh=(dx-a[i].x)*(dx-a[i].x)+(dy-a[i].y)*(dy-a[i].y);
            gh=(gx-a[i].x)*(gx-a[i].x)+(gy-a[i].y)*(gy-a[i].y);
            if(dh>=4*gh) {
                f=1;
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",a[i].x,a[i].y);
                break;
            }
        }
        if(f==0)printf("The gopher cannot escape.\n");
    }
    return 0;
}
