#include<cstdio>
#include<cmath>
#include<iostream>
#define INF 100000
using namespace std;

struct node
{
    int x,y;
} store[205];
double min(double x,double y)
{
    if(x<y)
        return x;
    else
        return y;
}
double max(double x,double y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int i,j,k,n,kas=1;
    double cost[205][205],x1,x2,y1,y2;
    while(scanf("%d",&n)==1 && n)
    {
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cost[i][j]=INF;

        for(i=1; i<=n; i++)
            scanf("%d %d",&store[i].x,&store[i].y);
        for(i=1; i<=n; i++)
        {
            x1=store[i].x;
            y1=store[i].y;
            for(j=1; j<=n; j++)
            {
                x2=store[j].x;
                y2=store[j].y;
                if(i!=j)
                {
                    double dist=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
                    dist=sqrt(dist);
                    cost[i][j]=cost[j][i]=dist;
                }
            }
        }

        for(int k=1; k<=n; ++k)
            for(int i=1; i<=n; ++i)
                for(int j=1; j<=n; ++j)
                    cost[i][j]=min(cost[i][j],max(cost[i][k],cost[k][j]));

        printf("Scenario #%d\nFrog Distance = %.3lf\n\n",kas++,cost[1][2]);
    }
    return 0;
}
