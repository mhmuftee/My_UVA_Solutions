#include<math.h>
#include<stdio.h>
struct rec
{
    double xu,yu,xl,yl;
    int a;
};
typedef struct rec r;
struct cir
{
    double xc,yc,r;
    int b;
};
typedef struct cir c;
struct tri {
    double x1,y1,x2,y2,x3,y3;
    int c;
};
typedef struct tri t;
double area(double x1,double y1,double x2,double y2, double x3,double y3) {
    double a=0;
    a=(x1*y2-y1*x2)+(x2*y3-x3*y2)+(x3*y1-y3*x1);
    if(a<0)a=-a;
    return a;
}
int main() {
    char ch;
    double x,y,a=0,b=0,a1,a2,a3,a4,a5;
    r re[12];
    c ci[12];
    t tr[12];
    int   g,h,k,i,j=0, count=0,countr=0,countc=0,countt=0;

    while(1)
    {   scanf("%c",&ch);
        if(ch=='r')
        {   count++;
            countr++;
            re[countr].a=count;
            scanf("%lf %lf %lf %lf",&re[countr].xu,&re[countr].yu,&re[countr].xl,&re[countr].yl);

        }
        if(ch=='c')
        {   count++;
            countc++;
            ci[countc].b=count;
            scanf("%lf %lf %lf",&ci[countc].xc,&ci[countc].yc,&ci[countc].r);

        }
        if(ch=='t')
        {
            count++;
            countt++;
            tr[countt].c=count;
            scanf("%lf %lf %lf %lf %lf %lf",&tr[countt].x1,&tr[countt].y1,&tr[countt].x2,&tr[countt].y2,&tr[countt].x3,&tr[countt].y3);
        }
        if(ch=='*')break;
    }

    while(1) { {
            j++;
            scanf("%lf %lf",&x,&y);
            if(x==9999.9 && y==9999.9)break;
            k=0;
            g=0;
            h=0;
            for(i=1; i<=countr; i++)
            {
                if((x>re[i].xu && x<re[i].xl) &&  (y<re[i].yu && y>re[i].yl))
                {
                    printf("Point %d is contained in figure %d\n",j,re[i].a);
                    k=1;
                }

            }
            for(i=1; i<=countc; i++)
            {
                a=(x-ci[i].xc)*(x-ci[i].xc);
                b=(y-ci[i].yc)*(y-ci[i].yc);
                if(a+b<ci[i].r*ci[i].r)
                {
                    printf("Point %d is contained in figure %d\n",j,ci[i].b);
                    g=1;
                }
            }
            for(i=1; i<=countt; i++)
            {
                a1=area(tr[i].x1,tr[i].y1,tr[i].x2,tr[i].y2,x,y);
                a2=area(tr[i].x1,tr[i].y1,x,y,tr[i].x3,tr[i].y3);
                a3=area(x,y,tr[i].x2,tr[i].y2,tr[i].x3,tr[i].y3);
                a4=area(tr[i].x1,tr[i].y1,tr[i].x2,tr[i].y2,tr[i].x3,tr[i].y3);

                a5=a1 + a2 + a3-a4;
                if(a5 <= 0.000001)
                {
                    printf("Point %d is contained in figure %d\n",j,tr[i].c);
                    h=1;
                }
            }

            if(k==0 && g==0 && h==0)
                printf("Point %d is not contained in any figure\n",j);
        }
    }
    return 0;
}
