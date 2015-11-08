#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define max 100000
vector<int>Graph[max];

void bfs(int src,int dis)
{
    queue < int > Q;
    int dist[max+1]= {0};
    Q.push(src);
    dist[src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<(int)Graph[u].size(); i++)
        {
            int v=Graph[u][i];
            if(!dist[v])
            {
                dist[v]=dist[u]+1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    printf("%d %d %d\n",src,dis,dist[dis]-2);
}
int main()
{
    int cas,N,M,O,S,newline=0,src,dis;

    scanf("%d",&cas);

    while(cas--)
    {
        for(int i=0; i<max; i++)
            Graph[i].clear();

        scanf("%d",&N);

        for(int i=0; i<N; i++)
        {
            scanf("%d %d",&M,&S);

            for(int j=0; j<S; j++)
            {
                scanf("%d",&O);
                Graph[M].push_back(O);
            }
        }
        scanf("%d %d",&src,&dis);

        if(newline)
            printf("\n");
        bfs(src,dis);
        newline=1;
    }
    return 0;
}
