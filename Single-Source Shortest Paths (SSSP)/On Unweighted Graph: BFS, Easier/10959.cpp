#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
vector < int > Graph[1001];

void bfs(int node)
{
    queue < int > Q;
    int color[1001]= {0},dist[1001],src=0;
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

    for(int i=1; i<node; i++)
        printf("%d\n",dist[i]);
}
int main()
{
    int i,j,k,n,m,cas=0,node,edge,kas;
    scanf("%d",&kas);
    while(kas--)
    {
        for(i=0; i<=1000; i++)
            Graph[i].clear();
        scanf("%d %d",&node,&edge);
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&m,&n);
            Graph[m].push_back(n);
            Graph[n].push_back(m);
        }
        if(cas)
            printf("\n");
        bfs(node);
        cas++;
    }
    return 0;
}

