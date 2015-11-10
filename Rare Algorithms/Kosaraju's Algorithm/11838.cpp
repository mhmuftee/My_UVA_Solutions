#include<cstdio>
#include<map>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
vector<int>G[2005],S;
string ss[2005];
int dfs_low[2005],dfs_num[2005],dfsNumberCounter,visited[2005],numSCC;
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
    while(scanf("%d %d",&node,&edge) && node && edge)
    {
        int a,b,c;
        int n=0;
        for(int i=0; i<=2000; i++)
            G[i].clear(),dfs_low[i]=0,dfs_num[i]=-1,visited[i]=0;
        numSCC=dfsNumberCounter=0;
        map <string,int>index;

        for(int i=0; i<edge; i++)
        {
            cin>>a>>b>>c;
            if(c==2)
                G[b].push_back(a);
            G[a].push_back(b);
        }
        numSCC=0;
        for(int i=1; i<=node; i++)
            if(dfs_num[i]==-1)
                tarjanSCC(i);

        if(numSCC==1)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}

