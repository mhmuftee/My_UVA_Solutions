#include<cstdio>
#define INF 100000
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
    int i,j,k,cost[105][100+5],q,n,e,kas=1,u,v,w;

    while(scanf("%d %d %d",&n,&e,&q)==3 && n && q && e)
    {
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
                cost[i][j]=INF;

        for(i=0; i<e; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            cost[u][v]=cost[v][u]=w;
        }
        for(k=1; k<=n; k++)
            for(j=1; j<=n; j++)
                for(i=1; i<=n; i++)
                    cost[i][j]=min(cost[i][j],max(cost[i][k],cost[k][j]));
        if(kas!=1)
            printf("\n");
        printf("Case #%d\n",kas++);
        for(i=0; i<q; i++)
        {
            scanf("%d %d",&u,&v);

            if(cost[u][v]==INF)
                printf("no path\n");
            else
                printf("%d\n",cost[u][v]);
        }
    }
    return 0;
}
