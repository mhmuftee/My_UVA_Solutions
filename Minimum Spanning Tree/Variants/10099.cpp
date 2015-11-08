#include<cstdio>
#include<cmath>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int i,j,k,cost[105][105],n,e,u,v,w,kas=1;

    while(scanf("%d %d",&n,&e)==2 && e && n)
    {
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                cost[i][j]=-13434;
                cost[i][i]=0;
            }
        for(i=1; i<=e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            cost[u][v]=cost[v][u]=w;
        }
        scanf("%d %d %d",&u,&v,&w);

        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));

        int min_trip=(int)ceil(w/double(cost[u][v]-1));

        printf("Scenario #%d\nMinimum Number of Trips = %d\n\n",kas++,min_trip);
    }
    return 0;
}
