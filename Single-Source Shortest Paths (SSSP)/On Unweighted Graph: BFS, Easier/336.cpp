#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

vector < int > G[31];
map < int , int > index;

void bfs(int n,int src,int des)
{
    queue<int>Q;
    int y=src;
    src=index[src];
    Q.push(src);
    int taken[31]= {0},distance[31]= {0};
    int source[31]= {0};
    taken [src]=1;
    distance [src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            if(!taken[v])
            {
                distance[v]=distance[u]+1;
                taken[v]=1;
                Q.push(v);
                source[v]=u;
            }
        }
        Q.pop();
    }
    int count=0;
    for(int i=1; i<=n; i++)
        if( taken[i] && distance[i]<=des )
            count++;
    printf("%d nodes not reachable from node %d with TTL = %d.\n", n-count,y,des);
}
int main()
{
    int cas=1,b;
    int node,ed,x,y,m,n;
    while(scanf("%d",&ed)==1 && ed)
    {
        b=1;
        index.clear();
        for(int J=0; J<=31; J++)
            G[J].clear();
        for(int I=0; I<ed; I++)
        {
            scanf("%d %d",&x,&y);
            if(!index[x])
                index[x]=b++;
            if(!index[y])
                index[y]=b++;
            G[index[x]].push_back(index[y]);
            G[index[y]].push_back(index[x]);
        }
        while(1)
        {
            scanf("%d %d",&m,&n);
            if(!m && !n)break;
            printf("Case %d: ",cas++);
            bfs(b-1,m,n);
        }
    }
    return 0;
}
