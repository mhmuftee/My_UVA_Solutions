#include<cstdio>
#include<queue>
#include<string>
#include<vector>
#include<iostream>
#include<map>
#define max 700
using namespace std;

vector < int > Graph[max];
map <string , int > index;
vector < string > ind;

void bfs(int src,int dis)
{
    queue < int > Q;
    int color[max+1]= {0},dist[max+1],parent[max+1]= {0},chek=1,a,b;
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

    while(parent[dis])
    {
        a=dis;
        chek=0;
        b=parent[dis];
        cout << ind[a-1] << " "<< ind[b-1]<<endl;
        dis=parent[dis];
    }
    if(chek)
        printf("No route\n");
}
int main()
{
    int i,j,k,cas,node,b;
    string x,y;
    k=0;
    while(scanf("%d",&cas)==1)
    {
        index.clear();
        ind.clear();
        for( i=0; i<=max; i++)
            Graph[i].clear();
        b=0;
        for(i=0; i<cas; i++)
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
        cin >> x >> y;
        if(k)
            printf("\n");
        bfs(index[y],index[x]);
        k=1;
    }
    return 0;
}
