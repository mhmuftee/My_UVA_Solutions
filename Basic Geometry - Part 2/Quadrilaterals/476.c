#include<stdio.h>
struct rec
{
    double xu,yu,xl,yl;
};
typedef struct rec r;
int main() {

    char ch;
    double x,y;
    r re[12];
    int   k,i,j=0, count=0;

    while(1)
    {   scanf("%c",&ch);
        if(ch=='r')
        {   count++;

            scanf("%lf %lf %lf %lf",&re[count].xu,&re[count].yu,&re[count].xl,&re[count].yl);

        }
        if(ch=='*')break;
    }
    while(1) { {
            j++;
            scanf("%lf %lf",&x,&y);
            if(x==9999.9 && y==9999.9)break;
            k=0;
            for(i=1; i<=count; i++)
                if((x>re[i].xu && x<re[i].xl) &&  (y<re[i].yu && y>re[i].yl))
                {
                    printf("Point %d is contained in figure %d\n",j,i);
                    k=1;
                }
            if(k==0)
                printf("Point %d is not contained in any figure\n",j);
        }
    }
    return 0;
}
