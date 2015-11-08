#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector < int > Graph[200];

void bfs(int src,int dis)
{
    queue < int > Q;
    int color[201]= {0},bicolor[201]= {0};
    Q.push(src);
    color[src]=1;
    bicolor[src]=1;
    int bi=0;
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
            }
            if(bicolor[v] && bicolor[u]==bicolor[v])
            {
                bi=1;
                break;
            }
            if(!bicolor[v] && bicolor[u]==1)
                bicolor[v]=2;

            if(!bicolor[v] && bicolor[u]==2)
                bicolor[v]=1;
        }
        Q.pop();
        if(bi==1)
            break;
    }
    if(bi)
        printf("NOT BICOLORABLE.\n");
    else
        printf("BICOLORABLE.\n");
}
int main()
{
    int i,j,k,n,m,cas,node,min=1000,max=-1;
    while(scanf("%d",&node)==1 && node)
    {
        for(i=0; i<=200; i++)
            Graph[i].clear();
        scanf("%d",&cas);
        for(i=1; i<=cas; i++)
        {
            scanf("%d %d",&m,&n);
            Graph[m].push_back(n);
            Graph[n].push_back(m);
            if(n<min)
                min=n;
            if(n>max)
                max=n;
            if(m<min)
                min=m;
            if(m>max)
                max=m;
        }
        bfs(min,max);
    }
    return 0;
}
