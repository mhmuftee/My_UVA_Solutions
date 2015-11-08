#include<cstdio>
#include<vector>
#define infinity 9999
#define max 16
using namespace std;
int t;

vector <int > path;
void dij(int n,int v,int cost[max][max],int dist[]);

int main()
{
    int n,N,v,i,j,k,weight,cost[max][max],dist[max];
    int cas=1;
    freopen("in.txt","r",stdin);
    while(scanf("%d",&n)==1 && n) {
        for(i=0; i<=max; i++)
            for(j=0; j<=max; j++)
                cost[i][j]=infinity;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&N);

            for(j=0; j<N; j++)
            {   scanf("%d %d",&k,&weight);
                cost[i][k]=weight;
            }
        }
        scanf("%d %d",&v,&t);
        int u=t;
        path.clear();
        dij(n,v,cost,dist);

        printf("Case %d: Path =",cas++);
        for(int i=path.size()-1; i>=0; i--)
            printf(" %d",path[i]);
        if(dist[u]==infinity)
            dist[u]=0;
        printf("; %d second delay\n",dist[u]);
    }
    return 0;
}
void dij(int n,int v,int cost[max][max],int dist[])
{
    int i,u,count,w,flag[max],min,par[max]= {0};
    for(i=1; i<=n; i++)
    {
        flag[i]=0;
        dist[i]=cost[v][i];
    }
    count=2;
    while(count<=n)
    {
        min=999;
        for(w=1; w<=n; w++)
            if(dist[w]<min && !flag[w])
                min=dist[w],u=w;
        flag[u]=1;
        count++;

        for(w=1; w<=n; w++)
            if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
                dist[w]=dist[u]+cost[u][w],par[w]=u;
    }
    while(1)
    {
        path.push_back(t);
        if(par[t]==0) {
            break;
        }
        t=par[t];
    }
    path.push_back(v);
}
