#include<cstdio>
#include<queue>
#include<string>
#include<vector>
#include<iostream>
#include<map>
#define max 26
using namespace std;

vector < int > Graph[max];
map <string , int > index;
vector < string > ind;

void bfs(int src,int dis)
{
    queue < int > Q;
    int color[max+1]= {0},parent[max+1]= {0},b;
    string x;
    Q.push(src);
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
                color[v]=1;
                parent[v]=u;
                Q.push(v);
            }
        }
        Q.pop();
    }
    b=dis;
    x=ind[b-1];
    cout << x[0];
    while(parent[dis])
    {
        b=parent[dis];
        x=ind[b-1];
        cout << x[0];
        dis=parent[dis];
    }
    cout<<endl;
}
int main()
{
    int i,j,k,ca,cas,edge,b;
    string x,y;
    k=0;
    scanf("%d",&cas);
    while(cas--)
    {   scanf("%d %d",&edge,&ca);
        index.clear();
        ind.clear();
        for( i=0; i<=max; i++)
            Graph[i].clear();
        b=0;
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
        if(k)
            cout<<endl;
        for(i=0; i<ca; i++)
        {   cin >> x >> y;
            bfs(index[y],index[x]);
        }
        k++;
    }
    return 0;
}
