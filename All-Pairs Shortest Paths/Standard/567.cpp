#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector < int > Graph [100];

void bfs(int src , int dis)
{
    queue < int > Q;
    int color[100]= {0},dist[100];
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<Graph[u].size(); i++)
        {
            int v=Graph[u][i];
            if(!color[v])
            {
                dist[v]=dist[u]+1;
                color[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    printf("%2d to %2d: %d\n",src,dis,dist[dis]);
}
int main()
{   int i,j,n,m , cas, ca, K=1 ;
    while(scanf("%d",&cas)==1)
    {   for(i=0; i<=100; i++)
            Graph[i].clear();
        for(i=0; i<cas; i++)
        {
            scanf("%d",&m);
            Graph[1].push_back(m);
            Graph[m].push_back(1);
        }
        for(i=2; i<=19; i++)
        {
            scanf("%d",&ca);
            for(j=0; j<ca; j++) {
                scanf("%d",&m);
                Graph[i].push_back(m);
                Graph[m].push_back(i);
            }
        }
        scanf("%d",&ca);
        printf("Test Set #%d\n",K++);
        for(int k=0; k<ca; k++)
        {
            scanf("%d %d",&m,&n);
            bfs(m,n);
        }
        printf("\n");
    }
    return 0;
}
