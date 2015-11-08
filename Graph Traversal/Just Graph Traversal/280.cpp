#include<cstdio>
#include<queue>
#include<vector>

using namespace std;

vector<int>Graph[1005];

void bfs(int src,int vertex)
{
    queue <int> Q;
    int color[1005]= {0},reachable=0;
    Q.push(src);
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<Graph[u].size(); i++)
        {
            int v=Graph[u][i];
            if(!color[v])
            {
                color[v]=1;
                Q.push(v);
                reachable++;
            }
        }
        Q.pop();
    }

    printf("%d",vertex-reachable);
    for(int i=1; i<=vertex; i++)
        if(!color[i])
            printf(" %d",i);
    printf("\n");
}
int main()
{
    int i,j,u,v,vertex;
    while(scanf("%d",&vertex)==1 && vertex)
    {
        for(i=0; i<=104; i++)
            Graph[i].clear();
        while(scanf("%d",&u)==1 && u)
        {
            while(scanf("%d",&v)==1 && v)
            {
                Graph[u].push_back(v);
            }
        }
        scanf("%d",&u);

        while(u--) {
            scanf("%d",&v);
            bfs(v,vertex);
        }
    }
    return 0;
}
