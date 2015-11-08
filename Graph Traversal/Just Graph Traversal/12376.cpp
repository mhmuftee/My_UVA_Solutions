#include<cstdio>
using namespace std;
#define max 101
int main()
{
    int g[max][max];
    int i,j,k,m,n,cas,node,ed,u,sum,ma;
    scanf("%d",&cas);
    for(k=1; k<=cas; k++)
    {   int weight[max]={0};
        for(i=0; i<=max; i++)
            for(j=0; j<=max; j++)
                g[i][j]=0;
        scanf("%d %d",&node,&ed);
        for(i=0; i<node; i++)
            scanf("%d",&weight[i]);

        for(j=0; j<ed; j++)
        {
            scanf("%d %d",&m,&n);
            g[m][n]=weight[n];
        }

        u=0;
        sum=0;
        for(;;)
        {   ma=0;
            for(i=0; i<node; i++)
                if(g[u][i]>ma)
                {
                    ma=g[u][i];
                    j=i;
                }
            u=j;
            i=0;
            sum+=ma;
            if(!ma)
                break;
        }
        printf("Case %d: %d %d\n",k,sum,u);
    }
    return 0;
}
