#include<cstdio>
#include<queue>
#include<vector>
#include<sstream>
#include<iostream>
#include<algorithm>
#define max 300
using namespace std;

vector < int > Graph[max];

void bfs(int src,int dis)
{
    queue < int > Q;
    int color[max+1]= {0},parent[max+1]= {0},k=1;
    vector < int > pri;
    pri.clear();
    Q.push(src);

    color[src]=1;
    parent[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        int b=Graph[u].size();
        for(int i=0; i<b; i++)
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
    while(parent[dis])
    {
        pri.push_back(dis);
        dis=parent[dis];
        k=0;
    }
    if(k)
        printf("connection impossible");
    else
    {   printf("%d",src);
        for(int i=pri.size()-1; i>=0; i--)
            printf(" %d",pri[i]);
    }
    printf("\n");
}
int main()
{
    int i,n,m,cas,node,num;
    string line;
    char c;
    while(scanf("%d",&cas)==1) {

        for(i=0; i<=max; i++)
            Graph[i].clear();

        for(i=0; i<cas; i++)
        {   scanf("%d%c",&m,&c);
            getline(cin,line);
            stringstream ss( line );
            while( ss >> num)
            {   Graph[m].push_back(num);
                ss>>c;
            }
        }

        scanf("%d",&node);
        printf("-----\n");
        for(i=0; i<node; i++)
        {
            scanf("%d %d",&m,&n);
            bfs(m,n);
        }
    }
    return 0;
}
