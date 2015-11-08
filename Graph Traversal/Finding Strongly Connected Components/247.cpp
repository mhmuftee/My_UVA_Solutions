#include<cstdio>
#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<int>G[105],S;
string ss[105];

int dfs_low[105],dfs_num[105],dfsNumberCounter,visited[105],numSCC;
#define DFS_WHITE -1

void tarjanSCC(int u)
{
    dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
    S.push_back(u);
    visited[u] = 1;
    for (int j = 0; j < (int)G[u].size(); j++)
    {
        int v = G[u][j];
        if (dfs_num[v] == DFS_WHITE)
            tarjanSCC(v);
        if (visited[v])
            dfs_low[u] = min(dfs_low[u], dfs_low[v]);
    }

    if (dfs_low[u] == dfs_num[u])
    {

        while (1)
        {
            int v = S.back();
            S.pop_back();
            visited[v] = 0;
            cout<<ss[v];
            if (u == v) break;
            cout<<", ";
        }
        printf("\n");
    }
}

int main()
{
    int node,edge,cas=0;
    while(scanf("%d %d",&node,&edge) && node && edge)
    {
        string a,b;
        int n=0;
        for(int i=0; i<=100; i++)
            G[i].clear(),dfs_low[i]=0,dfs_num[i]=-1,visited[i]=0;
        numSCC=dfsNumberCounter=0;
        map <string,int>index;
        for(int i=0; i<edge; i++)
        {
            cin>>a>>b;

            if(!index[a])
            {
                index[a]=++n;
                ss[index[a]]=a;
            }
            if(!index[b])
            {
                index[b]=++n;
                ss[index[b]]=b;
            }

            G[index[a]].push_back(index[b]);
        }

        if(cas)
            printf("\n");
        printf("Calling circles for data set %d:\n",++cas);

        for(int i=1; i<=node; i++)
            if(dfs_num[i]==-1)
                tarjanSCC(i);
    }

    return 0;
}
