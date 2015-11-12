#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double H,H1,H2,H3,area;
    int cas,chek,c=0;
    scanf("%d",&cas);
    while(scanf("%lf %lf %lf",&H1,&H2,&H3)==3)
    {
        chek=1;
        area=0;
        if(H1==0.0 || H2==0.0 || H3==0.0)
        {
            chek=0;
            printf("These are invalid inputs!\n");
            c++;
        }
        if(chek)
        {
            H1=1/H1;
            H2=1/H2;
            H3=1/H3;
            H=H1+H2+H3;
            H/=2;
            area=H*(H-H1)*(H-H2)*(H-H3);
        }
        if(chek)
            if(area<0.0000000)
            {
                chek=0;
                printf("These are invalid inputs!\n");
                c++;
            }
        if(chek)
        {
            area=sqrt(area);
            area*=4;
            area=1/area;
            area+=.0000001;
            printf("%.3lf\n",area);
        }
        if(c==cas)
            break;
    }
    return 0;
}
