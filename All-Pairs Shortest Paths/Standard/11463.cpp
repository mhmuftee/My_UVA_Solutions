#include<cstdio>
using namespace std;

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int i,j,k,cost[105][105],kas,l,n,e,u,v;
    scanf("%d",&kas);
    for(l=1; l<=kas; l++)
    {
        scanf("%d %d",&n,&e);

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                cost[i][j]=1000,cost[i][i]=0;

        for(i=0; i<e; i++)
        {
            scanf("%d %d",&u,&v);
            cost[u][v]=cost[v][u]=1;
        }

        for(k=0; k<n; k++)
            for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                    if(cost[i][k]+cost[k][j]<cost[i][j])
                        cost[i][j]=cost[i][k]+cost[k][j];
        scanf("%d %d",&u,&v);
        int min=cost[u][0]+cost[0][v];
        for(i=1; i<n; i++)
            min=max(min,cost[u][i]+cost[i][v]);
        printf("Case %d: %d\n",l,min);
    }

    return 0;
}
