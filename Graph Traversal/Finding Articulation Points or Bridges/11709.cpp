#include<cstdio>
#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<int>G[1005],S;
string ss[1005];
int dfs_low[1005],dfs_num[1005],dfsNumberCounter,visited[1005],numSCC;
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
        numSCC++;
        while (1)
        {
            int v = S.back();
            S.pop_back();
            visited[v] = 0;
            if (u == v) break;
        }
    }
}

int main()
{
    int node,edge,cas=0;
    while(scanf("%d %d",&node,&edge) && node)
    {
        string a,b,c;
        getchar();
        int n=0;
        for(int i=0; i<=1000; i++)
            G[i].clear(),dfs_low[i]=0,dfs_num[i]=-1,visited[i]=0;
        numSCC=dfsNumberCounter=0;
        map <string,int>index;

        for(int i=0; i<node; i++)
        {
            getline(cin,a);

            if(!index[a])
            {
                index[a]=++n;
            }
        }

        for(int i=0; i<edge; i++)
        {
            getline(cin,a);
            getline(cin,b);

            G[index[a]].push_back(index[b]);
        }

        for(int i=1; i<=node; i++)
            if(dfs_num[i]==-1)
                tarjanSCC(i);

        printf("%d\n",numSCC);
    }
    return 0;
}

