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
int main() {
    char ch;
    double x,y,a=0,b=0;
    r re[12];
    c ci[12];
    int   g,k,i,j=0, count=0,countr=0,countc=0;

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
        if(ch=='*')break;
    }

    while(1) { {
            j++;
            scanf("%lf %lf",&x,&y);
            if(x==9999.9 && y==9999.9)break;
            k=0;
            g=0;
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
            if(k==0 && g==0)
                printf("Point %d is not contained in any figure\n",j);
        }
    }
    return 0;
}
