#include<cstdio>
#include<queue>
#include<string>
#include<vector>
#include<iostream>
#include<map>
#define max 30
using namespace std;

vector < int > Graph[max];
map <string , int > index;
vector < string > ind;

void bfs(int co,int src,int dis)
{
    queue < int > Q;
    int color[max+1]= {0},dist[max+1],parent[max+1]= {0};
    Q.push(src);
    dist[src]=0;
    color[src]=1;
    parent[src]=0;
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
                parent[v]=u;
                Q.push(v);
            }
        }
        Q.pop();
    }
    if(!parent[dis])
        printf("NO SHIPMENT POSSIBLE\n");
    else
        printf("$%d\n",co*100*dist[dis]);
}
int main()
{
    int i,j,ca,co,cas,node,edge,b;
    string x,y;
    scanf("%d",&ca);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    for(int I=1 ; I <=ca; I++)
    {
        scanf("%d %d %d",&node,&edge,&cas);
        index.clear();
        ind.clear();
        for( i=0; i<=max; i++)
            Graph[i].clear();
        b=0;
        for(i=0; i<node; i++)
            cin >> x;
        for(i=0; i<edge; i++)
        {
            cin >> x >> y;
            if(!index[x])
            {
                index[x]=++b;
                ind.push_back(x);
            }
            if(!index[y])
            {
                index[y]=++b;
                ind.push_back(y);
            }
            Graph[index[x]].push_back(index[y]);
            Graph[index[y]].push_back(index[x]);
        }
        printf("DATA SET  %d\n\n",I);
        for(i=0; i<cas; i++)
        {
            cin >> co >> x >> y;
            bfs(co,index[x],index[y]);
        }
        printf("\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}

