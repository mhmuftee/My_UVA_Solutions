#include<cstdio>
#include<cmath>
using namespace std;

struct no
{
    double x,y;
} coor[105];
double w[105][105];

int main()
{
    int i,j,k,n,cas;
    double dis;
    scanf("%d",&cas);
    int newline=0;
    for(int L=1; L<=cas; L++)
    {
        scanf("%d",&n);
        for(k=1; k<=n; k++)
            scanf("%lf %lf",&coor[k].x,&coor[k].y);
        for(i=0; i<=101; i++)
            for(j=0; j<=101; j++)
                w[i][j]=-1.0;
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                if(w[i][j]==-1.0 && i!=j)
                {
                    dis=(coor[i].x-coor[j].x)*(coor[i].x-coor[j].x)+(coor[i].y-coor[j].y)*(coor[i].y-coor[j].y);
                    if(dis<=100.000)
                    {
                        dis=sqrt(dis);
                        w[i][j]=w[j][i]=dis;
                    }
                }
            }

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {

                if(w[i][j]==-1.0)
                    w[i][j]=100000.000;
                w[i][i]=0;
            }
        }

        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    if(w[i][j]>w[i][k]+w[k][j])
                        w[i][j]=w[i][k]+w[k][j];

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
                if(w[i][j]==100000.000)
                    w[i][j]=0;
        }
        double s=0;
        bool cardey=false;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(s<w[i][j])
                    s=w[i][j];
                if(w[i][j]==0.00 && i!=j)
                    cardey=1;
            }
        }

        printf("Case #%d:\n",L);
        if(fabs(s*1e4 - floor(s*1e4) - 0.5) > .01 && !cardey)
            printf("%.4lf\n",s);
        else
            printf("Send Kurdy\n");
        printf("\n");
    }
    return 0;
}
